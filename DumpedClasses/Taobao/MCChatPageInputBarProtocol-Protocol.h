//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HPGrowingTextView, UIButton, UIView;

@protocol MCChatPageInputBarProtocol <NSObject>
@property(retain, nonatomic) UIButton *menuSwitchButton;
@property(retain, nonatomic) UIButton *functionSwitchButton;
@property(readonly, nonatomic) HPGrowingTextView *textView;
- (void)refreshBarWithInputConfig:(unsigned long long)arg1;
- (void)updateFunctionSwitchButton:(UIButton *)arg1;
- (void)adjustInputBarFrame:(struct CGRect)arg1;
- (void)refreshInputBarWithInputType:(long long)arg1;
- (id)initWithRecordView:(UIView *)arg1 delegate:(id <MCChatPageInputBarDelegate>)arg2 config:(unsigned long long)arg3;
@end
