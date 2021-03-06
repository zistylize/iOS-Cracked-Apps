//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SHomeAwareCom.h"

#import "DiDiLocationManagerDelegate.h"

@class NSString, SDDJHomeModuleLogic;

@interface SDriverHomeAwareUnit : SHomeAwareCom <DiDiLocationManagerDelegate>
{
    _Bool _isFirstEnter;
    _Bool _hasCallChangeToDJTab;
    SDDJHomeModuleLogic *_commLogic;
}

@property(retain, nonatomic) SDDJHomeModuleLogic *commLogic; // @synthesize commLogic=_commLogic;
@property(nonatomic) _Bool hasCallChangeToDJTab; // @synthesize hasCallChangeToDJTab=_hasCallChangeToDJTab;
@property(nonatomic) _Bool isFirstEnter; // @synthesize isFirstEnter=_isFirstEnter;
- (void).cxx_destruct;
- (_Bool)isInConfirmOrder;
- (void)welcomeGuideDidNotShow;
- (void)homeCouponActivity;
- (void)homeCouponPreLoad;
- (void)citySettings:(id)arg1;
- (void)didiLocationManagerDidUpdateDistance:(double)arg1 distanceFilter:(double)arg2;
- (void)fetchCitySupportFirstTime;
- (void)onPositionDidChange:(id)arg1;
- (void)checkEnterprisePermission;
- (void)loadEnterpriseInfo;
- (void)didDriverInited;
- (void)dataAnalyze;
- (void)unbindBackgroundObserver;
- (void)bindBackgroundObserver;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)didSelected;
- (void)didUnselected;
- (void)bind:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <SBaseComProtocol><SFormDelegate> delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

