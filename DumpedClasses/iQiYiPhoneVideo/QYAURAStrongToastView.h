//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class QYAuraToastLoadingView, UILabel;

@interface QYAURAStrongToastView : UIView
{
    UILabel *_messageLabel;
    QYAuraToastLoadingView *_loadingView;
}

+ (unsigned long long)convertStrongToast2LoadingViewType:(unsigned long long)arg1;
@property(retain, nonatomic) QYAuraToastLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
- (void).cxx_destruct;
- (void)updateStrongToastWithType:(unsigned long long)arg1 message:(id)arg2;
- (id)initStrongToastWithType:(unsigned long long)arg1 message:(id)arg2;

@end

