//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBMultimediaEditComponent.h"

#import "TBDrawViewDelegate.h"
#import "TBEditStrokeStylePickerViewDataDelegate.h"
#import "TBEditStrokeStylePickerViewDelegate.h"

@class CIImage, NSString, TBDrawView, TBEditStrokeStylePickerView, TBInteractiveElementView, UIButton, UIView;

@interface TBMultimediaEditScrawlComponent : TBMultimediaEditComponent <TBEditStrokeStylePickerViewDelegate, TBDrawViewDelegate, TBEditStrokeStylePickerViewDataDelegate>
{
    _Bool _mosaicSelected;
    _Bool _isBarsHidden;
    _Bool _isBarsHiddenPrevious;
    TBDrawView *_canvas;
    TBEditStrokeStylePickerView *_sliderColorView;
    UIButton *_undoBtn;
    CIImage *_maskImage;
    TBInteractiveElementView *_interactiveElementView;
    UIView *_horizontalLine;
    UIView *_verticalLine;
}

@property(retain, nonatomic) UIView *verticalLine; // @synthesize verticalLine=_verticalLine;
@property(retain, nonatomic) UIView *horizontalLine; // @synthesize horizontalLine=_horizontalLine;
@property(retain, nonatomic) TBInteractiveElementView *interactiveElementView; // @synthesize interactiveElementView=_interactiveElementView;
@property(retain, nonatomic) CIImage *maskImage; // @synthesize maskImage=_maskImage;
@property(retain, nonatomic) UIButton *undoBtn; // @synthesize undoBtn=_undoBtn;
@property(retain, nonatomic) TBEditStrokeStylePickerView *sliderColorView; // @synthesize sliderColorView=_sliderColorView;
@property(retain, nonatomic) TBDrawView *canvas; // @synthesize canvas=_canvas;
- (void)onUndoButtonClick:(id)arg1;
- (void)updateMosaicState;
- (void)updateUndoBtn;
- (void)receiveInfo:(id)arg1;
- (void)drawMaskImage:(id)arg1;
- (void)drawViewCleanMosaic:(id)arg1;
- (void)drawUndoComplete;
- (void)drawViewDidCancel:(id)arg1;
- (void)drawViewWillEnd:(id)arg1;
- (void)drawViewWillMove:(id)arg1;
- (void)drawViewWillBegin:(id)arg1;
- (void)hideBarsWithDrawView:(id)arg1;
- (void)showBarsWithDrawView:(id)arg1;
- (id)strokeBarItems;
- (id)textureBarItems;
- (id)mosaicBarItems;
- (id)colorBarItems;
- (void)strokeStylePickerView:(id)arg1 pickColor:(id)arg2 drawStep:(unsigned long long)arg3 resourceInfo:(id)arg4;
@property(readonly, nonatomic) struct CGRect undoBtnFrame;
- (void)viewEndShot;
- (void)viewWillShot;
- (void)getPublishInfo:(id)arg1;
- (void)buttonClicked;
- (void)reset;
- (void)getEditActionResult:(id)arg1;
- (void)stop;
- (void)start;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
