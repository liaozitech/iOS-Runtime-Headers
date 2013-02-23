/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/EAFirmwareUpdater.framework/EAFirmwareUpdater
 */

@class <iAUPServerDelegate>, FirmwareBundle, NSMutableData;

@interface iAUPServer : NSObject {
    <iAUPServerDelegate> *_delegate;
    BOOL _escapeInProgress;
    unsigned int _firmwareImageBaseTransferAddress;
    int _parserState;
    unsigned char _telegramChecksum;
    NSMutableData *_telegramDataIn;
    unsigned int _telegramLength;
    FirmwareBundle *firmwareBundle;
    unsigned short objectBlockTransferSizes[4];
}

@property(retain) FirmwareBundle * firmwareBundle;

+ (id)sharedServer;

- (unsigned char)appendByteWithEscaping:(unsigned char)arg1 toObject:(id*)arg2;
- (void)appendToLog:(id)arg1;
- (void)dealloc;
- (id)firmwareBundle;
- (id)init;
- (void)logCommand:(unsigned char)arg1 payload:(char *)arg2 length:(unsigned int)arg3;
- (void)processInByte:(unsigned char)arg1;
- (void)processInTelegram;
- (void)resetParser;
- (void)sendCommand:(unsigned char)arg1 payload:(char *)arg2 payload_length:(unsigned short)arg3;
- (void)setDelegate:(id)arg1;
- (void)setFirmwareBundle:(id)arg1;
- (unsigned int)supportedTargetProductIDCode;

@end