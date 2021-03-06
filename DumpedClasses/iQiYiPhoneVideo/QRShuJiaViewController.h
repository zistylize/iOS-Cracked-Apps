//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QRDriftViewController.h"

#import "QRDriftViewControllerProtocol-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSMutableArray, NSString, QRDataLoadManager, QRHaveRedPointButton, QRScrollRecommendView, QRShuJiaEmptyView, QRSignInSuccessPopView, QRSignInView, QRTouchButton, UIButton, UIImageView, UITableView, UIView;

@interface QRShuJiaViewController : QRDriftViewController <UITableViewDataSource, UITableViewDelegate, QRDriftViewControllerProtocol>
{
    QRDataLoadManager *signInRequest;
    QRDataLoadManager *getSignInInfoRequest;
    QRDataLoadManager *searchHotNetwork;
    _Bool _isEditting;
    UITableView *_tableView;
    QRShuJiaEmptyView *_emptyView;
    QRTouchButton *_cancleBtn;
    UIButton *_deleteBtn;
    UIButton *_settingBtn;
    QRTouchButton *_allSelectBtn;
    NSMutableArray *_listArray;
    NSMutableArray *_deleteArray;
    QRSignInSuccessPopView *_signInSuccessPopView;
    QRSignInView *_signInView;
    UIView *_tableHeaderView;
    UIView *_headerBgView;
    UIImageView *_topBgView;
    QRHaveRedPointButton *_welfareBtn;
    QRScrollRecommendView *_recommendView;
    UIView *_lineViewEX;
}

@property(retain, nonatomic) UIView *lineViewEX; // @synthesize lineViewEX=_lineViewEX;
@property(retain, nonatomic) QRScrollRecommendView *recommendView; // @synthesize recommendView=_recommendView;
@property(retain, nonatomic) QRHaveRedPointButton *welfareBtn; // @synthesize welfareBtn=_welfareBtn;
@property(retain, nonatomic) UIImageView *topBgView; // @synthesize topBgView=_topBgView;
@property(retain, nonatomic) UIView *headerBgView; // @synthesize headerBgView=_headerBgView;
@property(retain, nonatomic) UIView *tableHeaderView; // @synthesize tableHeaderView=_tableHeaderView;
@property(retain, nonatomic) QRSignInView *signInView; // @synthesize signInView=_signInView;
@property(retain, nonatomic) QRSignInSuccessPopView *signInSuccessPopView; // @synthesize signInSuccessPopView=_signInSuccessPopView;
@property(nonatomic) _Bool isEditting; // @synthesize isEditting=_isEditting;
@property(retain, nonatomic) NSMutableArray *deleteArray; // @synthesize deleteArray=_deleteArray;
@property(retain, nonatomic) NSMutableArray *listArray; // @synthesize listArray=_listArray;
@property(retain, nonatomic) QRTouchButton *allSelectBtn; // @synthesize allSelectBtn=_allSelectBtn;
@property(retain, nonatomic) UIButton *settingBtn; // @synthesize settingBtn=_settingBtn;
@property(retain, nonatomic) UIButton *deleteBtn; // @synthesize deleteBtn=_deleteBtn;
@property(retain, nonatomic) QRTouchButton *cancleBtn; // @synthesize cancleBtn=_cancleBtn;
@property(retain, nonatomic) QRShuJiaEmptyView *emptyView; // @synthesize emptyView=_emptyView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)dealloc;
- (void)jumpToConsumeWelfare;
- (void)ShowConsumeWelfare;
- (void)showRedDot;
- (void)loadRecommendData;
- (void)addDeleteModel:(id)arg1;
- (void)routerEventWithName:(id)arg1 data:(id)arg2;
- (void)deleteHandle:(id)arg1;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)showSignInSuccessPopView:(id)arg1;
- (void)updateSignInInfoFromCloud:(id)arg1;
- (void)updateSignInInfoFromCloudIfRegistered:(id)arg1;
- (void)updateSignInView;
- (void)addbookshelf:(id)arg1;
- (void)hideDeleteBtn;
- (void)showDeleteBtn;
- (void)changeListType;
- (void)requestSignIn;
- (void)settingHandle:(id)arg1;
- (void)changeAllSelectBtnStatus;
- (void)allSelectHandle:(id)arg1;
- (void)cancleHandle:(id)arg1;
- (void)editHandle;
- (void)loadData;
- (void)reloadbookshelf:(id)arg1;
- (void)refreshUserInfo:(id)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)addrecommendView;
- (void)addSignInView;
- (void)addTopBackView;
- (void)addTableHeaderView;
- (void)addEmptyView;
- (void)addTableView;
- (void)runfeaturesGuideBtnInAnimate;
- (void)runSignInAnimate;
- (void)viewWillAppear:(_Bool)arg1;
- (void)addHeaderView;
- (void)backHandle:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

