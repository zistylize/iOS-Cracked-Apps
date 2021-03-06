//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSMutableArray, NSString, TRTopNavgationView, UITableView;

@interface ONEFusionPackageListController : UIViewController <UITableViewDelegate, UITableViewDataSource>
{
    TRTopNavgationView *_topNavgationView;
    UITableView *_tableview;
    NSMutableArray *_datasource;
}

@property(retain, nonatomic) NSMutableArray *datasource; // @synthesize datasource=_datasource;
@property(retain, nonatomic) UITableView *tableview; // @synthesize tableview=_tableview;
@property(readonly, nonatomic) TRTopNavgationView *topNavgationView; // @synthesize topNavgationView=_topNavgationView;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)cleanButtonClicked:(id)arg1;
- (void)onBackButtonClicked:(id)arg1;
- (void)initDatasource;
- (void)initNavigationBar;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

