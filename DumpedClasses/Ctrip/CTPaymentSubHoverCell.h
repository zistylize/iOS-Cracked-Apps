//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class CTImageView, CTVectorImageView, NSString, UIColor, UIImage, UILabel;

@interface CTPaymentSubHoverCell : UITableViewCell
{
    int _bankId;
    CTVectorImageView *_checkImageView;
    UILabel *_titleLabel;
    CTImageView *_leftImageView;
    CTVectorImageView *_leftVectorImageView;
}

@property(retain, nonatomic) CTVectorImageView *leftVectorImageView; // @synthesize leftVectorImageView=_leftVectorImageView;
@property(retain, nonatomic) CTImageView *leftImageView; // @synthesize leftImageView=_leftImageView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) CTVectorImageView *checkImageView; // @synthesize checkImageView=_checkImageView;
@property(nonatomic) int bankId; // @synthesize bankId=_bankId;
- (void).cxx_destruct;
@property(copy, nonatomic) UIImage *leftImage;
@property(copy, nonatomic) UIColor *titleColor;
@property(copy, nonatomic) NSString *titleText;
@property(nonatomic) _Bool showCheck;
- (void)setupCell;
- (void)setVectorImage:(id)arg1 andImageColor:(id)arg2 andSize:(struct CGSize)arg3;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
