//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIActivityIndicatorView, UIImageView;

@interface MJPhotoLoadingView : UIView
{
    UIImageView *_failureImageView;
    UIImageView *_defaultImageView;
    UIActivityIndicatorView *_indicator;
}

@property(retain, nonatomic) UIActivityIndicatorView *indicator; // @synthesize indicator=_indicator;
@property(retain, nonatomic) UIImageView *defaultImageView; // @synthesize defaultImageView=_defaultImageView;
@property(retain, nonatomic) UIImageView *failureImageView; // @synthesize failureImageView=_failureImageView;
- (void).cxx_destruct;
- (void)TotalBytes:(double)arg1 downloadedBytes:(double)arg2;
- (void)showLoading;
- (id)imageViewWithName:(id)arg1;
- (void)showDefault;
- (void)showFailure;
- (void)setFrame:(struct CGRect)arg1;

@end

