//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "O2OViewController.h"

#import "O2OCDPAdapterPromotionProtocol.h"
#import "O2OCommonSchemeProtocol.h"
#import "O2OEyePageMenuViewDelegate.h"
#import "O2OPopEyeViewCacheDelegate.h"

@class APExceptionView, AUBarButtonItem, CDPSpaceView, NSArray, NSString, O2OEyePageMenuView, O2OPopEyeModel, O2OPopEyeSubViewController, O2OSelectPositionService, UIActivityIndicatorView, UIView;

@interface O2OPopEyeViewController : O2OViewController <O2OCommonSchemeProtocol, O2OEyePageMenuViewDelegate, O2OPopEyeViewCacheDelegate, O2OCDPAdapterPromotionProtocol>
{
    _Bool _fromKoubeiHomePage;
    _Bool _isFirstAppear;
    _Bool _positionSeleting;
    NSArray *_popEyeSubVCs;
    O2OEyePageMenuView *_headView;
    O2OPopEyeSubViewController *_selectedSubVC;
    UIActivityIndicatorView *_indicatorView;
    APExceptionView *_netErrorView;
    APExceptionView *_netLimitView;
    APExceptionView *_emptyErrorView;
    APExceptionView *_locationErrorView;
    UIView *_contentView;
    UIView *_loadingView;
    UIView *_maskView;
    AUBarButtonItem *_rightBarBtnItem;
    CDPSpaceView *_spaceView;
    O2OPopEyeModel *_popEyeModel;
    double _animationInterval;
    long long _sequence;
    NSString *_loadingText;
    O2OSelectPositionService *_selectPositionService;
}

+ (double)popEyeAnimationInterval;
+ (unsigned long long)canInitWithScheme:(id)arg1;
@property(nonatomic) _Bool positionSeleting; // @synthesize positionSeleting=_positionSeleting;
@property(retain, nonatomic) O2OSelectPositionService *selectPositionService; // @synthesize selectPositionService=_selectPositionService;
@property(retain, nonatomic) NSString *loadingText; // @synthesize loadingText=_loadingText;
@property(nonatomic) _Bool isFirstAppear; // @synthesize isFirstAppear=_isFirstAppear;
@property(nonatomic) long long sequence; // @synthesize sequence=_sequence;
@property(nonatomic) _Bool fromKoubeiHomePage; // @synthesize fromKoubeiHomePage=_fromKoubeiHomePage;
@property(nonatomic) double animationInterval; // @synthesize animationInterval=_animationInterval;
@property(retain, nonatomic) O2OPopEyeModel *popEyeModel; // @synthesize popEyeModel=_popEyeModel;
@property(retain, nonatomic) CDPSpaceView *spaceView; // @synthesize spaceView=_spaceView;
@property(retain, nonatomic) AUBarButtonItem *rightBarBtnItem; // @synthesize rightBarBtnItem=_rightBarBtnItem;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) UIView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) APExceptionView *locationErrorView; // @synthesize locationErrorView=_locationErrorView;
@property(retain, nonatomic) APExceptionView *emptyErrorView; // @synthesize emptyErrorView=_emptyErrorView;
@property(retain, nonatomic) APExceptionView *netLimitView; // @synthesize netLimitView=_netLimitView;
@property(retain, nonatomic) APExceptionView *netErrorView; // @synthesize netErrorView=_netErrorView;
@property(retain, nonatomic) UIActivityIndicatorView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(retain, nonatomic) O2OPopEyeSubViewController *selectedSubVC; // @synthesize selectedSubVC=_selectedSubVC;
@property(retain, nonatomic) O2OEyePageMenuView *headView; // @synthesize headView=_headView;
@property(retain, nonatomic) NSArray *popEyeSubVCs; // @synthesize popEyeSubVCs=_popEyeSubVCs;
- (void).cxx_destruct;
- (void)dealloc;
- (void)back;
- (id)nearbyPopeyeJumpUrl;
- (_Bool)nearbyPopeyeSwitch;
- (_Bool)popFutureSwitch;
- (double)contentTop;
- (void)configTableViewFrame;
- (void)removeAnnouncement;
- (void)addAnnouncementWithAnimate:(id)arg1;
- (void)promotionViewDidFinishLoading:(id)arg1 spaceCode:(id)arg2;
- (void)stopAnimation;
- (void)startAnimation;
- (void)applicationDidEnterBackground;
- (void)applicationDidBecomeActive;
- (_Bool)hasCacheData;
- (void)reloadSelectedSubVC;
- (void)didSelectMenuView:(id)arg1 selectedIndex:(unsigned long long)arg2 currentIndex:(unsigned long long)arg3;
- (void)reload;
- (void)startLocating;
- (void)setpopEyeQuestLocationXY;
- (void)showError:(id)arg1 withModel:(id)arg2;
- (void)showEmpty:(id)arg1;
- (_Bool)canShowModel:(id)arg1;
- (void)showModel:(id)arg1;
- (void)showLoading:(id)arg1;
- (void)stopLoading;
- (void)removeMaskView;
- (void)checkMaskView;
- (void)setupPopEyeView;
- (void)setupContentView;
- (void)setupView;
- (id)generatePOIWithLatitude:(double)arg1 longitude:(double)arg2;
- (void)gotoPopFuture;
- (void)gotoNearbyPopeyeMerchants;
- (id)nearByBarBtnItem;
- (id)popeyeFutureBtnItem;
- (void)setupNavigationBar;
- (id)pageSpm;
- (_Bool)autohideNavigationBar;
- (void)viewDidLoad;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithScheme:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
