/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/Frameworks/ExternalAccessory.framework/ExternalAccessory
 */

@class NSOutputStream, NSInputStream, NSString, EAAccessory;



@interface EASession : NSObject 
{
    EAAccessory *_accessory;
    NSUInteger _sessionID;
    NSString *_protocolString;
    NSInputStream *_inputStream;
    NSOutputStream *_outputStream;
}

@property(readonly) NSOutputStream *outputStream; /* unknown property attribute: V_outputStream */
@property(readonly) NSInputStream *inputStream; /* unknown property attribute: V_inputStream */
@property(readonly) NSString *protocolString; /* unknown property attribute: V_protocolString */
@property(readonly) EAAccessory *accessory; /* unknown property attribute: V_accessory */


- (id)init;
- (id)initWithAccessory:(id)arg1 forProtocol:(id)arg2;
- (void)dealloc;
- (id)description;
- (id)_shortDescription;
- (NSUInteger)_sessionID;
- (id)outputStream;
- (id)inputStream;
- (id)protocolString;
- (id)accessory;

@end