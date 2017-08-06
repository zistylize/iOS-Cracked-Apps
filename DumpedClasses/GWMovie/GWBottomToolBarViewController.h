//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "GWAlertViewDelegate-Protocol.h"
#import "GWBottomToolBarViewDelegate-Protocol.h"
#import "GWProviderDelegate-Protocol.h"

@class GWStatusCollectProvider, NSString;
@protocol GWAppTypeDelegate, GWBottomToolBarViewControllerDelegate;

@interface GWBottomToolBarViewController : UIViewController <GWAlertViewDelegate, GWProviderDelegate, GWBottomToolBarViewDelegate>
{
    _Bool _likeStatusBeUpdated;
    _Bool _isNotReleaseMovie;
    _Bool _alreadySearch;
    id <GWAppTypeDelegate> _relatedInfo;
    CDUnknownBlockType _bottomBarDidLoadCustomButton;
    id <GWBottomToolBarViewControllerDelegate> _delegate;
    CDUnknownBlockType _onCollectButtonClicked;
    GWStatusCollectProvider *_collectProvider;
    GWStatusCollectProvider *_cacheCollectProvider;
}

@property(nonatomic) _Bool alreadySearch; // @synthesize alreadySearch=_alreadySearch;
@property(retain, nonatomic) GWStatusCollectProvider *cacheCollectProvider; // @synthesize cacheCollectProvider=_cacheCollectProvider;
@property(retain, nonatomic) GWStatusCollectProvider *collectProvider; // @synthesize collectProvider=_collectProvider;
@property(nonatomic) _Bool isNotReleaseMovie; // @synthesize isNotReleaseMovie=_isNotReleaseMovie;
@property(nonatomic) _Bool likeStatusBeUpdated; // @synthesize likeStatusBeUpdated=_likeStatusBeUpdated;
@property(copy, nonatomic) CDUnknownBlockType onCollectButtonClicked; // @synthesize onCollectButtonClicked=_onCollectButtonClicked;
@property(nonatomic) __weak id <GWBottomToolBarViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) CDUnknownBlockType bottomBarDidLoadCustomButton; // @synthesize bottomBarDidLoadCustomButton=_bottomBarDidLoadCustomButton;
@property(nonatomic) __weak id <GWAppTypeDelegate> relatedInfo; // @synthesize relatedInfo=_relatedInfo;
- (void).cxx_destruct;
- (void)bottomToolBar:(id)arg1 buttonClickWithType:(unsigned long long)arg2;
- (void)bottomBarDidLoad:(id)arg1;
- (void)walaButtonClick:(id)arg1;
- (void)shareButtonClick:(id)arg1;
- (void)likeButtonClick:(id)arg1;
- (void)customButtonClick:(id)arg1;
- (void)showGWAlertView;
- (void)requestColloctWithRequestType:(int)arg1 bar:(id)arg2;
- (_Bool)isLikeFromCache;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
