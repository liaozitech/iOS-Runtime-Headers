/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class NSString, NSArray;

@interface DACalendarStore : DACalendarObject  {
}

@property(readonly) int uid;
@property(readonly) NSString * externalID;
@property(readonly) NSArray * calendars;
@property(readonly) NSArray * events;


- (id)externalID;
- (int)uid;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)events;
- (id)calendars;

@end