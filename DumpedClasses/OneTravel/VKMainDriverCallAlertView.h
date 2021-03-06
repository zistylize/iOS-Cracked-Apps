//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VKAlertActionView.h"

#import "VKMainDriverCallContentViewDelegate.h"
#import "VKMainDriverCallModifyViewDelegate.h"

@class NSString, VKMainDriverCallContentView, VKOrderPhoneModel;

@interface VKMainDriverCallAlertView : VKAlertActionView <VKMainDriverCallContentViewDelegate, VKMainDriverCallModifyViewDelegate>
{
    VKMainDriverCallContentView *_contentView;
    VKOrderPhoneModel *_orderPhoneModel;
    NSString *_callPhoneNumber;
    id <VKMainDriverCallAlertViewDelegate> _delegate;
}

@property(nonatomic) __weak id <VKMainDriverCallAlertViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)layoutSubviews;
- (void)mainDriverCallModifyView:(id)arg1 didModifiedWithResponse:(id)arg2 forPhoneNumber:(id)arg3;
- (void)mainDriverCallModifyViewDidCancel:(id)arg1;
- (void)mainDriverCallContentViewDidCall:(id)arg1;
- (void)mainDriverCallContentViewDidModify:(id)arg1;
- (void)mainDriverCallContentViewDidCancel:(id)arg1;
- (void)didReceiveKeyboardWillHideNotification:(id)arg1;
- (void)didReceiveKeyboardWillShowNotification:(id)arg1;
- (id)initWithOrderPhoneModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

