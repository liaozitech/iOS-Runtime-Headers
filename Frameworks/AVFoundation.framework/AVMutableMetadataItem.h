/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVMutableMetadataItemInternal, NSString, <NSObject><NSCopying>, NSLocale, NSDictionary;

@interface AVMutableMetadataItem : AVMetadataItem  {
    AVMutableMetadataItemInternal *_mutablePriv;
}

@property(copy) <NSObject><NSCopying> * key;
@property(copy) NSString * keySpace;
@property(copy) NSLocale * locale;
@property struct { long long value; int timescale; unsigned int flags; long long epoch; } time;
@property struct { long long value; int timescale; unsigned int flags; long long epoch; } duration;
@property(copy) <NSObject><NSCopying> * value;
@property(copy) NSDictionary * extraAttributes;

+ (id)metadataItem;

- (id)key;
- (void)setKey:(id)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })duration;
- (void)setLocale:(id)arg1;
- (id)locale;
- (id)value;
- (void)setTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setValue:(id)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })time;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setKeySpace:(id)arg1;
- (id)extraAttributes;
- (void)setExtraAttributes:(id)arg1;
- (id)keySpace;

@end