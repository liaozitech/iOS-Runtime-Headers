/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class ISDownloadQueue, ISDownloadDescriptor, ISRemoteObserver;



@interface ISDownload : NSObject 
{
    id _delegate;
    ISDownloadQueue *_queue;
    ISDownloadDescriptor *_descriptor;
    ISRemoteObserver *_remoteObserver;
    struct CGImage { } *_artworkImage;
    unsigned int _loadingArtworkImage : 1;
    unsigned int _local : 1;
}


- (id)initWithDescriptor:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setDescriptor:(id)arg1;
- (void)setDownloadQueue:(id)arg1;
- (BOOL)canPause;
- (BOOL)canRetry;
- (BOOL)canStart;
- (BOOL)isPaused;
- (NSInteger)state;
- (BOOL)pause;
- (BOOL)resume;
- (BOOL)remove;
- (BOOL)retry;
- (BOOL)beginWatchingDaemonForObserver:(id)arg1;
- (void)endWatchingDaemonForObserver:(id)arg1 afterDeath:(BOOL)arg2;
- (void)_downloadArtworkError:(id)arg1;
- (void)_downloadArtworkLoaded:(id)arg1;
- (void)_downloadEncounteredError:(id)arg1;
- (void)_downloadProgressChanged:(id)arg1;
- (void)_downloadStateChanged:(id)arg1;
- (struct CGImage { }*)artworkImage;
- (id)artworkURL;
- (BOOL)artworkURLIsPrerendered;
- (BOOL)loadArtworkImage;
- (id)bundleID;
- (double)bytesPerSecond;
- (NSUInteger)count;
- (long long)currentBytes;
- (NSInteger)currentOperationType;
- (double)estimatedTimeRemaining;
- (NSInteger)externalDownloadType;
- (NSUInteger)identifier;
- (BOOL)isWaitingForQueue;
- (unsigned long)itemIdentifier;
- (NSInteger)mediaType;
- (NSUInteger)purchaseIdentifier;
- (void)setIsWaitingForQueue:(BOOL)arg1;
- (void)setPurchaseIdentifier:(NSUInteger)arg1;
- (id)subtitle;
- (id)title;
- (long long)totalBytes;
- (id)uniqueID;
- (float)installationProgress;
- (BOOL)isLocal;
- (void)setLocal:(BOOL)arg1;
- (BOOL)_issueArtworkLoadRequest;

@end