//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XYPHBaseViewController.h"

#import "UITextViewDelegate.h"
#import "XYPHPostModelAtUserViewControllerDelegate.h"
#import "XYPHPostModelKeyboardInputAccessoryViewDelegate.h"
#import "XYPHPostModelLocationViewControllerDelegate.h"
#import "XYPHPostNoteImageCollectionViewDelegate.h"
#import "XYPHPostNoteLocationViewDelegate.h"
#import "XYPHPostNoteShareViewDelegate.h"
#import "XYPHPostNoteTagHashViewContollerDelegate.h"
#import "XYPHPostNoteTitleInputFieldDelegate.h"
#import "XYTKTextViewDelegate.h"

@class NSError, NSString, UIScrollView, UIView, XYPHPostModelKeyboardInputAccessoryView, XYPHPostNoteImageCollectionView, XYPHPostNoteLocationView, XYPHPostNoteShareView, XYPHPostNoteTitleInputField, XYTKTextView;

@interface XYPHPostNoteViewController : XYPHBaseViewController <XYPHPostNoteTitleInputFieldDelegate, XYPHPostNoteImageCollectionViewDelegate, XYPHPostModelKeyboardInputAccessoryViewDelegate, XYPHPostModelAtUserViewControllerDelegate, XYPHPostNoteLocationViewDelegate, XYPHPostModelLocationViewControllerDelegate, UITextViewDelegate, XYPHPostNoteTagHashViewContollerDelegate, XYTKTextViewDelegate, XYPHPostNoteShareViewDelegate>
{
    NSError *downloadOriginImageError;
    _Bool isDownloadingImage;
    _Bool insertHashTag;
    _Bool insertAt;
    UIScrollView *_scrollView;
    UIView *_titleAndDescContainerView;
    XYPHPostNoteTitleInputField *_titleTextFieldView;
    XYTKTextView *_descTextView;
    XYPHPostModelKeyboardInputAccessoryView *_keyboardInputAccessoryView;
    XYPHPostNoteImageCollectionView *_imagesCollectionView;
    XYPHPostNoteShareView *_sharedView;
    UIView *_blackMaskView;
    XYPHPostNoteLocationView *_locationView;
    unsigned long long _sharedPlatform;
}

@property(nonatomic) unsigned long long sharedPlatform; // @synthesize sharedPlatform=_sharedPlatform;
@property(retain, nonatomic) XYPHPostNoteLocationView *locationView; // @synthesize locationView=_locationView;
@property(retain, nonatomic) UIView *blackMaskView; // @synthesize blackMaskView=_blackMaskView;
@property(retain, nonatomic) XYPHPostNoteShareView *sharedView; // @synthesize sharedView=_sharedView;
@property(retain, nonatomic) XYPHPostNoteImageCollectionView *imagesCollectionView; // @synthesize imagesCollectionView=_imagesCollectionView;
@property(retain, nonatomic) XYPHPostModelKeyboardInputAccessoryView *keyboardInputAccessoryView; // @synthesize keyboardInputAccessoryView=_keyboardInputAccessoryView;
@property(retain, nonatomic) XYTKTextView *descTextView; // @synthesize descTextView=_descTextView;
@property(retain, nonatomic) XYPHPostNoteTitleInputField *titleTextFieldView; // @synthesize titleTextFieldView=_titleTextFieldView;
@property(retain, nonatomic) UIView *titleAndDescContainerView; // @synthesize titleAndDescContainerView=_titleAndDescContainerView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void).cxx_destruct;
- (void)setupDefaultSharePlatform;
- (_Bool)canPostWithHashTagCount:(id *)arg1;
- (void)presentAtUserViewController;
- (void)presentHashTagViewController;
- (void)doneBarButtonItemTouchUpInside:(id)arg1;
- (void)postButtonTouchUpInside:(id)arg1;
- (void)saveToDraftBarButtonItemTouchUpInside:(id)arg1;
- (void)blackMaskViewTapGesture:(id)arg1;
- (void)backBarButtonClicked:(id)arg1;
- (void)cancelBarButtonItemTouchUpInside:(id)arg1;
- (void)postModelLocationViewController:(id)arg1 didSelectedPostNoteLocation:(id)arg2;
- (void)postNoteLocationView:(id)arg1 didSelectedLocationChange:(id)arg2;
- (void)postNoteLocationView:(id)arg1 didAddLocationButtonTouchUpInside:(id)arg2;
- (void)textViewDidChange:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)textView:(id)arg1 didDeleteUserMentionText:(id)arg2;
- (void)textView:(id)arg1 didDeleteHashText:(id)arg2;
- (void)postNoteTagHashViewContollerDidCancelSelected:(id)arg1;
- (void)postNoteTagHashViewContoller:(id)arg1 didSelectedHashTag:(id)arg2;
- (void)postModelAtUserViewControllerDidCancelBarButtonTouchUpInsie:(id)arg1;
- (void)postModelAtUserViewController:(id)arg1 didSelectedPostNoteAtUser:(id)arg2;
- (void)postNoteImageCollectionViewAddImageTouchUpInside:(id)arg1;
- (void)postNoteImageCollectionView:(id)arg1 didSelectedImageAtIndex:(long long)arg2;
- (void)postNoteShareView:(id)arg1 didSaveResourceSelected:(_Bool)arg2;
- (void)postNoteShareView:(id)arg1 didWeiboSelected:(_Bool)arg2;
- (void)postNoteShareView:(id)arg1 didQQSelected:(_Bool)arg2;
- (void)postNoteShareView:(id)arg1 didWechatSelected:(_Bool)arg2;
- (void)postModelKeyboardInputAccessoryView:(id)arg1 didEmojiButtonTouchUpInside:(id)arg2;
- (void)postModelKeyboardInputAccessoryView:(id)arg1 didAtButtonTouchUpInside:(id)arg2;
- (void)postModelKeyboardInputAccessoryView:(id)arg1 didHashTagButtonTouchUpInside:(id)arg2;
- (void)postNoteTitleInputFieldTextChange:(id)arg1 text:(id)arg2;
- (void)postNoteTitleInputFieldEndEdit:(id)arg1;
- (void)postNoteTitleInputFieldBeginEdit:(id)arg1;
- (void)setupPostImage;
- (void)setupBlackMaskView;
- (void)setupShareView;
- (void)setupLocationView;
- (void)setupImageCollectionView;
- (void)setupTitleAndDescView;
- (void)setupScrollViewAndPostButton;
- (void)setupNavigationBarItemToDone;
- (void)setupNavigationBarItemSaveDraft;
- (void)setupNavigationBarItemBack;
- (void)setup;
- (void)setupResourceLocation;
- (void)setupData;
- (void)setupTextData;
- (_Bool)prefersStatusBarHidden;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
