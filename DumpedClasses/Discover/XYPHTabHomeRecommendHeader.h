//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton, UIImageView, UILabel;

@interface XYPHTabHomeRecommendHeader : UIView
{
    UIView *_contentView;
    UIImageView *_imageView;
    UILabel *_titleLabel;
    UILabel *_descLabel;
    UIButton *_hideButton;
    UIButton *_goButton;
    UIButton *_doneButton;
}

+ (double)computeHeightWithBorder:(_Bool)arg1;
@property(retain, nonatomic) UIButton *doneButton; // @synthesize doneButton=_doneButton;
@property(retain, nonatomic) UIButton *goButton; // @synthesize goButton=_goButton;
@property(retain, nonatomic) UIButton *hideButton; // @synthesize hideButton=_hideButton;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void).cxx_destruct;
- (void)initWithBorder:(_Bool)arg1;

@end
