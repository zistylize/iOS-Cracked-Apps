//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView, UILabel;

@interface CTHotelUserEncourageView : UIView
{
    UILabel *_txtLabel;
    UIImageView *_yyImg;
    UIImageView *_sellerShowIconView;
    UILabel *_sellerLabel;
    UIImageView *_arrowImgView;
}

@property(retain, nonatomic) UIImageView *arrowImgView; // @synthesize arrowImgView=_arrowImgView;
@property(retain, nonatomic) UILabel *sellerLabel; // @synthesize sellerLabel=_sellerLabel;
@property(retain, nonatomic) UIImageView *sellerShowIconView; // @synthesize sellerShowIconView=_sellerShowIconView;
@property(retain, nonatomic) UIImageView *yyImg; // @synthesize yyImg=_yyImg;
@property(retain, nonatomic) UILabel *txtLabel; // @synthesize txtLabel=_txtLabel;
- (void).cxx_destruct;
- (id)textAfterThresHold;
- (id)textBeforeThresHold;
- (void)resize:(double)arg1 withTop:(double)arg2;
- (void)updateArrowImgView:(_Bool)arg1;
- (void)showSellerShowEncoyrageWithOffset:(double)arg1;
- (void)showUserEncourageText:(id)arg1;
- (void)initBaseView;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)arg1;

@end
