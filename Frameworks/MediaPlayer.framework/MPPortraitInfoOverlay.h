/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPPortraitControlsOverlay, MPItem, MPTextView;

@interface MPPortraitInfoOverlay : UIView {
    unsigned int _transitioning : 1;
    MPPortraitControlsOverlay *_controlsView;
    id _delegate;
    MPTextView *_displayableTextView;
    MPItem *_item;
    NSUInteger _visibleParts;
}

@property NSUInteger visibleParts; /* unknown property attribute: V_visibleParts */
@property(retain) MPItem *item; /* unknown property attribute: V_item */
@property id delegate; /* unknown property attribute: V_delegate */

- (id)_controlsView;
- (void)_displayableTextAvailable:(id)arg1;
- (void)_displayableTextRemovalAnimationDidStop;
- (id)_displayableTextView;
- (void)_hideControlsAndTextView;
- (void)_hideSnapshotAnimationFinished;
- (void)_playbackStateChanged:(id)arg1;
- (void)_reloadDisplayableTextViewForItem:(id)arg1 animate:(BOOL)arg2;
- (void)_reloadViews;
- (void)_removeDisplayableTextWithAnimation:(BOOL)arg1;
- (void)_updateDisplayableTextViewForItem:(id)arg1 animate:(BOOL)arg2;
- (void)dealloc;
- (id)delegate;
- (void)didMoveToSuperview;
- (void)didTransition;
- (BOOL)hide;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)item;
- (void)layoutSubviews;
- (void)setAlpha:(float)arg1;
- (void)setDelegate:(id)arg1;
- (void)setItem:(id)arg1;
- (void)setVisibleParts:(NSUInteger)arg1;
- (void)startTicking;
- (void)stopTicking;
- (void)textView:(id)arg1 handleTapWithCount:(NSInteger)arg2 event:(struct __GSEvent { }*)arg3;
- (NSUInteger)visibleParts;
- (void)willTransition;

@end