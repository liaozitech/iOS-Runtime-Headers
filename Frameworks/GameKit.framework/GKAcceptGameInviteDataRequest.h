/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSDictionary, NSData, GKInvite;

@interface GKAcceptGameInviteDataRequest : GKDataRequest  {
    GKInvite *_invite;
    NSData *_connectionData;
    NSDictionary *_acceptGameInviteResponse;
    unsigned char _inviteVersion;
}

@property unsigned char inviteVersion;
@property(retain) NSDictionary * acceptGameInviteResponse;
@property(retain) NSData * connectionData;
@property(retain) GKInvite * invite;


- (void)setConnectionData:(id)arg1;
- (id)connectionData;
- (void)setInviteVersion:(unsigned char)arg1;
- (id)acceptGameInviteResponse;
- (unsigned char)inviteVersion;
- (void)setAcceptGameInviteResponse:(id)arg1;
- (void)setInvite:(id)arg1;
- (void)handleResponseFromServer:(id)arg1 error:(id)arg2;
- (id)invite;
- (id)key;
- (id)request;
- (void)dealloc;
- (id)header;

@end