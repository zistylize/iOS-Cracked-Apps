//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KGViewController.h"

#import "ChargeHeadViewProtocol.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UserLoginViewControllerDelegate.h"
#import "iCarouselDataSource.h"

@class ChargeHeadView, FXSShakeActivityConfigInfo, FXUserInfo, NSArray, NSMutableArray, NSString, UITableView, UIView;

@interface FXChargeViewController : KGViewController <UITableViewDataSource, UITableViewDelegate, iCarouselDataSource, ChargeHeadViewProtocol, UserLoginViewControllerDelegate>
{
    NSArray *_titleArray;
    NSArray *_imageArray;
    _Bool _hadHiddenStatusBar;
    FXUserInfo *_starInfo;
    UITableView *_chargeTableView;
    UIView *_headView;
    NSMutableArray *_allTopicArray;
    ChargeHeadView *_chargeHeadView;
    FXSShakeActivityConfigInfo *_shakeConfigInfo;
}

@property(retain, nonatomic) FXSShakeActivityConfigInfo *shakeConfigInfo; // @synthesize shakeConfigInfo=_shakeConfigInfo;
@property(retain, nonatomic) ChargeHeadView *chargeHeadView; // @synthesize chargeHeadView=_chargeHeadView;
@property(retain, nonatomic) NSMutableArray *allTopicArray; // @synthesize allTopicArray=_allTopicArray;
@property(retain, nonatomic) UIView *headView; // @synthesize headView=_headView;
@property(retain, nonatomic) UITableView *chargeTableView; // @synthesize chargeTableView=_chargeTableView;
@property(nonatomic) _Bool hadHiddenStatusBar; // @synthesize hadHiddenStatusBar=_hadHiddenStatusBar;
@property(retain, nonatomic) FXUserInfo *starInfo; // @synthesize starInfo=_starInfo;
- (void).cxx_destruct;
- (void)getShakeActivityInfo;
- (void)noLoginAction:(id)arg1;
- (void)loginCancel;
- (void)loginSuccess;
- (void)login;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)carousel:(id)arg1 viewForItemAtIndex:(unsigned long long)arg2 reusingView:(id)arg3;
- (unsigned long long)numberOfItemsInCarousel:(id)arg1;
- (void)touchBanner:(long long)arg1;
- (void)getRechargeInfo;
- (void)updateHeaderView;
- (void)dealloc;
- (long long)showPlayBarWay;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
