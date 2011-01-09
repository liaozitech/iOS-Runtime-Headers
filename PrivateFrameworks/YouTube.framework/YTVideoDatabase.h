/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/PrivateFrameworks/YouTube.framework/YouTube
 */

@class NSMutableDictionary, NSConditionLock, NSMutableArray, NSLock;



@interface YTVideoDatabase : NSObject 
{
    struct sqlite3 { } *_db;
    struct sqlite3_stmt { } *_insertVersionStatement;
    struct sqlite3_stmt { } *_versionStatement;
    struct sqlite3_stmt { } *_selectVideoIDStatement;
    struct sqlite3_stmt { } *_insertVideoStatement;
    struct sqlite3_stmt { } *_deleteVideoStatement;
    struct sqlite3_stmt { } *_deleteVideosStatement;
    struct sqlite3_stmt { } *_selectBookmarkedVideosStatement;
    struct sqlite3_stmt { } *_insertThumbnailStatement;
    struct sqlite3_stmt { } *_selectThumbnailStatement;
    struct sqlite3_stmt { } *_deleteThumbnailsStatement;
    struct sqlite3_stmt { } *_deleteThumbnailsByIDStatement;
    NSMutableDictionary *_allVideos;
    NSConditionLock *_queueLock;
    NSMutableArray *_dbQueue;
    NSLock *_dbLock;
}

+ (void)enableVideoDatabase;
+ (id)sharedVideoDatabase;
+ (id)_videoDatabasePath;

- (id)videoWithID:(id)arg1;
- (void)insertVideo:(id)arg1 inDiskCache:(BOOL)arg2;
- (void)insertVideo:(id)arg1;
- (void)setThumbnailData:(id)arg1 forVideoWithID:(id)arg2;
- (id)thumbnailDataForVideoWithID:(id)arg1;
- (void)deleteThumbnailDataForVideoWithID:(id)arg1;
- (id)init;
- (void)finalizeDB;
- (BOOL)_start;
- (id)_locked_videoWithID:(id)arg1;
- (void)_locked_deleteVideosBeforeRowID:(long long)arg1;
- (void)_locked_evictVideosWithLastInsertedRowID:(long long)arg1;
- (void)_locked_deleteThumbnailsBeforeRowID:(long long)arg1;
- (void)_locked_evictThumbnailsWithLastInsertedRowID:(long long)arg1;
- (void)_insertVideo:(id)arg1 onlyIfAbsent:(BOOL)arg2;
- (void)_insertThumbnailData:(id)arg1 forVideoID:(id)arg2;
- (void)_performOperations:(id)arg1;
- (void)_dbLoop;
- (BOOL)_locked_prepareStatements;
- (void)_locked_createTables;
- (NSInteger)_locked_databaseVersion;
- (void)_locked_insertDatabaseVersion;
- (void)_importBookmarks:(id)arg1;
- (BOOL)_locked_openDatabase;
- (void)_locked_closeDatabase;
- (BOOL)_locked_deleteDatabase;
- (id)_locked_bookmarkedVideos;

@end