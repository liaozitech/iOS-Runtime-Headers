/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface ICThumbnailData : NSObject {
    struct UIImage { Class x1; } *_image;
    unsigned int _imageScaling;
    BOOL _isMovie;
    BOOL _showAsFileIcon;
}

@property (nonatomic, retain) UIImage *image;
@property (nonatomic) unsigned int imageScaling;
@property (nonatomic) BOOL isMovie;
@property (nonatomic) BOOL showAsFileIcon;

- (void).cxx_destruct;
- (struct UIImage { Class x1; }*)image;
- (unsigned int)imageScaling;
- (id)initWithImage:(struct UIImage { Class x1; }*)arg1 imageScaling:(unsigned int)arg2 showAsFileIcon:(BOOL)arg3 isMovie:(BOOL)arg4;
- (BOOL)isMovie;
- (void)setImage:(struct UIImage { Class x1; }*)arg1;
- (void)setImageScaling:(unsigned int)arg1;
- (void)setIsMovie:(BOOL)arg1;
- (void)setShowAsFileIcon:(BOOL)arg1;
- (BOOL)showAsFileIcon;

@end
