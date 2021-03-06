//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QYCommonViewController.h"

#import "LCActionSheetDelegate-Protocol.h"
#import "QYTableViewDelegate-Protocol.h"
#import "QYUserSpaceCommentServiceDelegate-Protocol.h"
#import "QYUserSpaceServiceDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "UITextViewDelegate-Protocol.h"

@class NSString, QYTableView, QYUserSpaceCommentCell, QYUserSpaceCommentCellModel, QYUserSpaceCommentModel, QYUserSpaceCommentService, QYUserSpaceService, UIButton, UILabel, UITableView, UITextView, UIView;
@protocol QYUserSpaceCommentViewControllerDelegate;

@interface QYUserSpaceCommentViewController : QYCommonViewController <UITextViewDelegate, QYUserSpaceServiceDelegate, UITableViewDelegate, UITableViewDataSource, LCActionSheetDelegate, QYUserSpaceCommentServiceDelegate, QYTableViewDelegate>
{
    UIView *sendCommentView;
    UITextView *commentView;
    UIButton *sendCommentButton;
    UIView *commentBgView;
    UILabel *placeholderLabel;
    QYTableView *tableView;
    double startY;
    QYUserSpaceService *userSpaceService;
    QYUserSpaceCommentService *commentService;
    QYUserSpaceCommentModel *commentModel;
    NSString *targetUid;
    _Bool isFirstRequest;
    UITableView *_commentTableView;
    id <QYUserSpaceCommentViewControllerDelegate> _commentDelegate;
    QYUserSpaceCommentCellModel *_currentCommentModel;
    QYUserSpaceCommentCellModel *_fakeCellModel;
    QYUserSpaceCommentCell *_prototypeCell;
    NSString *_qitanId;
}

@property(retain, nonatomic) NSString *qitanId; // @synthesize qitanId=_qitanId;
@property(retain, nonatomic) QYUserSpaceCommentCell *prototypeCell; // @synthesize prototypeCell=_prototypeCell;
@property(retain, nonatomic) QYUserSpaceCommentCellModel *fakeCellModel; // @synthesize fakeCellModel=_fakeCellModel;
@property(retain, nonatomic) QYUserSpaceCommentCellModel *currentCommentModel; // @synthesize currentCommentModel=_currentCommentModel;
@property(nonatomic) __weak id <QYUserSpaceCommentViewControllerDelegate> commentDelegate; // @synthesize commentDelegate=_commentDelegate;
@property(retain, nonatomic) UITableView *commentTableView; // @synthesize commentTableView=_commentTableView;
- (void).cxx_destruct;
- (void)shouldGetDataInTableView:(id)arg1;
- (void)shouldRefreshInTableView:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)dateStringFromTimestamp:(id)arg1;
- (id)createReplyCommentCellModel:(id)arg1 replyModel:(id)arg2;
- (id)createPublishCommentCellModel:(id)arg1;
- (id)createCommentCellModel:(id)arg1;
- (void)userSpaceCommentDataRequestFailed:(id)arg1 commentServiceType:(unsigned long long)arg2;
- (void)userSpaceCommentDataRequestSuccess:(id)arg1 commentServiceType:(unsigned long long)arg2;
- (void)delayRefreshNoMore;
- (void)delayLoadMoreFailed;
- (void)delayLoadMoreFinished;
- (void)userSpaceDataRequestFailed:(id)arg1;
- (void)userSpaceDataRequestSuccess:(id)arg1;
- (void)retryRequest;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)sendComment:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)userFingerMove:(id)arg1;
- (void)keyboardFrameChanged:(id)arg1;
- (void)keyboardWasHidden:(id)arg1;
- (void)keyboardWillHidden:(id)arg1;
- (void)keyboardWasShown:(id)arg1;
- (id)createActionSheetWithType:(unsigned long long)arg1;
- (void)createSendCommentView;
- (void)showLoadingView;
- (void)prepareGetData;
- (void)commonInit;
- (id)initWithTargetUid:(id)arg1 qitanId:(id)arg2 fakeCellModel:(id)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

