//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, NSMutableArray, NSString, UILabel;

@interface FMAlertView : UIView
{
    NSString *_titleIcon;
    long long _titleAlignment;
    long long _contentAligment;
    UIView *_messageView;
    UILabel *_titleLabel;
    UILabel *_messageLabel;
    NSMutableArray *_alertActions;
    NSArray *_buttons;
    UIView *_sectionSeparator;
}

+ (void)presentWithTitle:(id)arg1 messageView:(id)arg2 actions:(id)arg3;
+ (void)presentInView:(id)arg1 withTitle:(id)arg2 messageView:(id)arg3 actions:(id)arg4;
+ (void)presentInView:(id)arg1 withTitle:(id)arg2 message:(id)arg3 actions:(id)arg4;
+ (void)presentWithTitle:(id)arg1 message:(id)arg2 actions:(id)arg3;
@property(retain, nonatomic) UIView *sectionSeparator; // @synthesize sectionSeparator=_sectionSeparator;
@property(retain, nonatomic) NSArray *buttons; // @synthesize buttons=_buttons;
@property(retain, nonatomic) NSMutableArray *alertActions; // @synthesize alertActions=_alertActions;
@property(retain, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *messageView; // @synthesize messageView=_messageView;
@property(nonatomic) long long contentAligment; // @synthesize contentAligment=_contentAligment;
@property(nonatomic) long long titleAlignment; // @synthesize titleAlignment=_titleAlignment;
@property(copy, nonatomic) NSString *titleIcon; // @synthesize titleIcon=_titleIcon;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (double)calculateHeightForWidth:(double)arg1 applyLayout:(_Bool)arg2;
@property(copy, nonatomic) NSString *message;
@property(copy, nonatomic) NSString *title;
- (void)buttonAction:(id)arg1;
- (void)addAction:(id)arg1;
@property(readonly, nonatomic) NSArray *actions;
- (id)initWithFrame:(struct CGRect)arg1;

@end
