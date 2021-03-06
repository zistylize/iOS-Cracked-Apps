//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSMutableArray, NSRecursiveLock;
@protocol QYMovieContainerViewDataSource, QYMovieContainerViewDelegate;

@interface QYMovieContainerView : UIView
{
    UIView *_internalWrapperView;
    double _width;
    NSMutableArray *_viewsCache;
    NSMutableArray *_visibleViews;
    NSRecursiveLock *_lock;
    id <QYMovieContainerViewDelegate> _delegate;
    id <QYMovieContainerViewDataSource> _dataSource;
    struct UIEdgeInsets _contentInsets;
}

@property(nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property(nonatomic) id <QYMovieContainerViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) id <QYMovieContainerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)updateContentSize;
- (void)loadSubviews;
- (void)refreshDisplay;
- (void)reloadData;
- (id)dequeueReusableCellWithIndex:(long long)arg1;
- (id)viewForRowAtIndex:(long long)arg1;
@property(readonly, nonatomic) NSArray *visibleViewItems;
@property(readonly, nonatomic) NSArray *viewItems;
- (void)storeView:(id)arg1 hidden:(_Bool)arg2;
- (void)checkHeightWithOffset:(double)arg1;
- (void)layoutSubviews;
- (id)initWithLimitedWidth:(double)arg1;

@end

