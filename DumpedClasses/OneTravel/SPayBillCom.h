//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBaseComponent.h"

#import "SBottomContainerViewSource.h"
#import "SPayBillComProtocol.h"
#import "SPayBillCompatibleDataSourceDelegate.h"

@class NSString, SPayBillDataModel, SPayBillOFODataSource, UIImageView, UILabel, UITextField, UIView;

@interface SPayBillCom : SBaseComponent <SPayBillComProtocol, SPayBillCompatibleDataSourceDelegate, SBottomContainerViewSource>
{
    _Bool _isLoading;
    _Bool _isLoadFail;
    _Bool _isRetry;
    _Bool _autoOpenPayPanel;
    _Bool _hasShownFeeDoubt;
    UIView *_payBillView;
    SPayBillOFODataSource *_dataSource;
    SPayBillDataModel *_billDataModel;
    double _viewHeight;
    UITextField *_inputTxt;
    UILabel *_inputPlaceHolder;
    unsigned long long _currentSytle;
    UIImageView *_loadingView;
    NSString *_retryMsg;
}

@property(nonatomic) _Bool hasShownFeeDoubt; // @synthesize hasShownFeeDoubt=_hasShownFeeDoubt;
@property(nonatomic) _Bool autoOpenPayPanel; // @synthesize autoOpenPayPanel=_autoOpenPayPanel;
@property(retain, nonatomic) NSString *retryMsg; // @synthesize retryMsg=_retryMsg;
@property(nonatomic) _Bool isRetry; // @synthesize isRetry=_isRetry;
@property(nonatomic) _Bool isLoadFail; // @synthesize isLoadFail=_isLoadFail;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(retain, nonatomic) UIImageView *loadingView; // @synthesize loadingView=_loadingView;
@property(nonatomic) unsigned long long currentSytle; // @synthesize currentSytle=_currentSytle;
@property(retain, nonatomic) UILabel *inputPlaceHolder; // @synthesize inputPlaceHolder=_inputPlaceHolder;
@property(retain, nonatomic) UITextField *inputTxt; // @synthesize inputTxt=_inputTxt;
@property(nonatomic) double viewHeight; // @synthesize viewHeight=_viewHeight;
@property(retain, nonatomic) SPayBillDataModel *billDataModel; // @synthesize billDataModel=_billDataModel;
@property(retain, nonatomic) SPayBillOFODataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) UIView *payBillView; // @synthesize payBillView=_payBillView;
- (void).cxx_destruct;
- (void)tapCancelReason;
- (void)tapCheckSelect:(_Bool)arg1;
- (void)tapTipItem:(id)arg1;
- (void)tapActItem:(id)arg1;
- (_Bool)isAgentOrder;
- (void)dataSource:(id)arg1 helpToCloseViewController:(id)arg2;
- (void)dataSource:(id)arg1 helpToOpenViewController:(id)arg2;
- (void)hideKeyBoard;
- (void)addGestureRecognizer;
- (void)addSomeObserver;
- (void)triggerEvent:(unsigned long long)arg1 params:(id)arg2;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)keyboardWasHiden:(id)arg1;
- (void)keyboardWasShown:(id)arg1;
- (void)updatePlaceHolderText:(id)arg1;
- (void)refreshPayBillModel;
- (struct CGRect)viewFrameForComponent:(id)arg1;
- (void)doPayment;
- (void)tapCheck:(id)arg1;
- (id)createCheckButton;
- (id)createLbl:(id)arg1 font:(id)arg2 corlor:(id)arg3;
- (id)placeHolderStr;
- (id)priceUnitStr;
- (id)originPriceStr;
- (void)createInputLabel;
- (void)createTipItem;
- (void)createCancelIcon;
- (void)createLineView;
- (void)createCancelMsg;
- (void)createCancelTitle;
- (id)payButton:(id)arg1 withRect:(struct CGRect)arg2;
- (void)createRefreshButton;
- (void)createPayButton;
- (void)createActItemView;
- (void)createFeeItemView;
- (id)hilightLabel:(id)arg1 font:(id)arg2 lightColor:(id)arg3 normalColor:(id)arg4;
- (void)createFeeExplantaion;
- (void)createFeeTips;
- (void)createTotalPrice;
- (void)createLoadFailView:(_Bool)arg1 errMsg:(id)arg2;
- (void)createLoadingView;
- (void)loadPayBillView;
- (void)openPayPanelAutomatically;
- (void)setNeedsOpenPayPanel;
- (void)resetLoadParameter;
- (void)reqPayBillDataModel;
- (void)reloadData;
- (id)signalWhiteList;
- (id)viewForContainerView:(id)arg1 expand:(_Bool)arg2;
- (void)setupView;
- (id)initWithDataSource:(id)arg1 config:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <SPayBillComProtocol> delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
