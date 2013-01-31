/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

@class UIImageView, NSTimer, IUGeniusGridView, UIPageControl, NSMutableArray, NSMutableSet, UIScrollView, UITableViewCell, MPGeniusMix;

@interface IUGeniusMixViewController : IUiPodViewController <IUGeniusGridViewDelegate, SSDownloadManagerObserver, UIScrollViewDelegate> {
    UIImageView *_artworkImageView;
    BOOL _didPushMix;
    IUGeniusGridView *_flippedGridView;
    NSMutableArray *_gridViews;
    BOOL _isObservingDownloads;
    BOOL _isZooming;
    UITableViewCell *_moreListTableViewCell;
    NSTimer *_navBarUpdateTimer;
    UIPageControl *_pageControl;
    UIScrollView *_scrollView;
    BOOL _shouldUpdateNavBar;
    NSMutableSet *_unusedGridViewPool;
}

@property(readonly) MPGeniusMix * selectedMix;


- (void)geniusGridViewWasTapped:(id)arg1;
- (void)_zoomOutDidStop;
- (void)_downloadMixForCurrentPage:(id)arg1;
- (void)_cancelDownloadingMixForCurrentPage:(id)arg1;
- (struct CGPoint { float x1; float x2; })_contentOffsetForPage:(int)arg1;
- (void)_enqueueGridViewForReuse:(id)arg1;
- (id)_dequeueExistingGridView;
- (int)navigationTransition;
- (id)_viewControllerContextForCurrentPage;
- (struct CGPoint { float x1; float x2; })_contentOffsetForCurrentPage;
- (BOOL)_hasGridViewForPage:(int)arg1;
- (void)_createGridViewIfNecessaryForPage:(int)arg1;
- (void)_pruneGridViewPages;
- (void)_updateNavigationBarForCurrentPageAnimated:(BOOL)arg1;
- (id)selectedMix;
- (BOOL)_currentPageIsPlayingGeniusMix;
- (void)_zoomArtworkInForDataSource:(id)arg1;
- (void)_zoomArtworkOut;
- (void)_flipGridView:(id)arg1 toOrientation:(int)arg2 animated:(BOOL)arg3;
- (int)_playingGeniusMixPage;
- (int)_pageForContentOffset;
- (void)_reloadDataWithSelectedMix:(id)arg1;
- (void)_pageControlValueDidChange:(id)arg1;
- (id)_geniusMixDataSource;
- (void)_unloadGridViews;
- (void)dealloc;
- (id)init;
- (id)moreListTableCell;
- (id)_moreListTitle;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)reloadData;
- (void)_networkTypeDidChangeNotification:(id)arg1;
- (void)_nowPlayingItemDidChange:(id)arg1;
- (void)unregisterForPlayerNotifications;
- (void)registerForPlayerNotifications;
- (void)downloadManager:(id)arg1 downloadStatesDidChange:(id)arg2;

@end