//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QYCommonViewController.h"

#import "IQYDataLoadManagerDelegate-Protocol.h"

@class NSDictionary, NSMutableArray, NSString, UIScrollView, VideoListDataLoader;

@interface QYVideoCategoryPickerViewController : QYCommonViewController <IQYDataLoadManagerDelegate>
{
    UIScrollView *_contentView;
    NSMutableArray *_categoryList;
    long long _selectIndex;
    VideoListDataLoader *_dataLoader;
    CDUnknownBlockType _finishBlock;
    NSDictionary *_currentCategory;
}

@property(copy, nonatomic) NSDictionary *currentCategory; // @synthesize currentCategory=_currentCategory;
@property(copy, nonatomic) CDUnknownBlockType finishBlock; // @synthesize finishBlock=_finishBlock;
- (void)leftBarButtonAction;
- (void)dataLoadManagerCanceled:(id)arg1;
- (void)dataLoadManagerFailed:(id)arg1;
- (void)dataLoadManagerFinished:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)selectCategory:(id)arg1;
- (void)prepareView;
- (void)loadData;
- (void)loadContentView;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithValue:(id)arg1 finishBlock:(CDUnknownBlockType)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

