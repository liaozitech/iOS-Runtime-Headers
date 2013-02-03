/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UITouch;

@interface UIPinchGestureRecognizer : UIGestureRecognizer {
    struct CGAffineTransform { 
        float a; 
        float b; 
        float c; 
        float d; 
        float tx; 
        float ty; 
    struct CGPoint { 
        float x; 
        float y; 
    unsigned int _endsOnSingleTouch : 1;
    } _anchorPoint;
    float _hysteresis;
    float _initialTouchDistance;
    float _initialTouchScale;
    double _lastTouchTime;
    float _previousVelocity;
    float _scaleThreshold;
    UITouch *_touches[2];
    } _transform;
    float _velocity;
}

@property(readonly) struct CGPoint { float x; float y; } anchorPoint;
@property(getter=_hysteresis,setter=_setHysteresis:) float hysteresis;
@property float scale;
@property float scaleThreshold;
@property(readonly) float velocity;

+ (void)addPinchGestureRecognizerToView:(id)arg1 withTarget:(id)arg2 action:(SEL)arg3;

- (BOOL)_endsOnSingleTouch;
- (float)_hysteresis;
- (void)_resetGestureRecognizer;
- (void)_setEndsOnSingleTouch:(BOOL)arg1;
- (void)_setHysteresis:(float)arg1;
- (struct CGPoint { float x1; float x2; })anchorPoint;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (float)scale;
- (float)scaleThreshold;
- (void)setScale:(float)arg1;
- (void)setScaleThreshold:(float)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (float)velocity;

@end