//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBAudienceSeenStateListener-Protocol.h"
#import "FBBackstagePublishingHandlerListener-Protocol.h"
#import "FBSnackSettingsFetcherListener-Protocol.h"
#import "FBSnacksPaginatedDataControllerDelegate-Protocol.h"

@class FBAudienceSeenStateHandler, FBInlineSnacksStoryBucketData, FBSnacksDataControllerListenerAnnouncer, FBSnacksPaginatedDataController, FBUserSession, NSMutableSet, NSString;
@protocol FBGraphQLSubscriptionHandle, OS_dispatch_queue;

@interface FBSnacksDataController : NSObject <FBSnacksPaginatedDataControllerDelegate, FBBackstagePublishingHandlerListener, FBAudienceSeenStateListener, FBSnackSettingsFetcherListener>
{
    FBSnacksDataControllerListenerAnnouncer *_announcer;
    NSObject<OS_dispatch_queue> *_backgroundQueue;
    FBUserSession *_session;
    FBInlineSnacksStoryBucketData *_storyBucketData;
    _Bool _hasFetchedCache;
    _Bool _didUpdateFromServer;
    FBSnacksPaginatedDataController *_paginatedDataController;
    _Bool _shouldUsePaginatedDataSource;
    _Bool _shouldUseLightWeightQueries;
    _Bool _shouldFetchOnForeground;
    long long _numberOfThreadsToPrefetch;
    NSMutableSet *_bucketsBeingFetched;
    NSMutableSet *_threadsBeingFetched;
    NSString *_latestPostTimeCursor;
    FBAudienceSeenStateHandler *_seenStateHandler;
    id <FBGraphQLSubscriptionHandle> _subscriptionHandle;
}

- (void).cxx_destruct;
- (void)_applicationDidForeground:(id)arg1;
- (void)_logRefreshSuccessIfNeeded;
- (void)_logColdStartSuccessIfNeeded;
- (void)_subscribeToDataUpdates;
- (void)_deleteThread:(id)arg1;
- (void)_updateTutorialForBucketIfNeeded:(id)arg1;
- (long long)_unseenCountByApplyingSeenStateWithThreads:(id)arg1;
- (id)_applySeenStateForBucket:(id)arg1;
- (id)_storyBucketDataByApplyingCachedSeenState:(id)arg1;
- (id)_storyBucketDataByValidatingTime:(id)arg1;
- (void)_cacheSnacksStoryBucketData:(id)arg1;
- (void)_replaceWithUpdatedThread:(id)arg1 inBucket:(id)arg2;
- (void)_parseNullStateResponse:(id)arg1 withSuccessBlock:(CDUnknownBlockType)arg2;
- (void)_parseResponse:(id)arg1;
- (void)publishingHandler:(id)arg1 willPublishTask:(id)arg2;
- (void)publishingHandler:(id)arg1 didTimeoutForTask:(id)arg2;
- (void)publishingHandlerDidFinishAllPublications:(id)arg1;
- (void)publishingHandler:(id)arg1 didBeginProcessingVideosForTask:(id)arg2;
- (void)publishingHandler:(id)arg1 didUpdateProgress:(double)arg2 forTask:(id)arg3;
- (void)publishingHandler:(id)arg1 didFinishTask:(id)arg2 error:(id)arg3;
- (void)publishingHandler:(id)arg1 didEnqueueTask:(id)arg2;
- (void)snacksPaginatedDataControllerDidFinishPullUpToRefresh;
- (void)snacksPaginatedDataControllerDidFinishInitailFetch;
- (void)snacksPaginatedDataControllerDidUpdateStoryBucketData:(id)arg1;
- (void)seenStateHandlerDidLoadCache:(id)arg1;
- (void)seenStateHandler:(id)arg1 didUpdateThread:(id)arg2 inBucket:(id)arg3;
- (void)snacksSettingsFetcher:(id)arg1 didUpdateSettingsModel:(id)arg2;
- (void)_setStoryBucketData:(id)arg1 withUpdateType:(unsigned long long)arg2;
- (id)deleteViewerThread:(id)arg1;
- (void)fetchViewerThreadStoryViewersWithThreadID:(id)arg1;
- (void)reactToThread:(id)arg1 inBucket:(id)arg2 withReaction:(id)arg3;
- (void)loadNextPage;
- (void)queryNullStateFriendsWithSuccessCallback:(CDUnknownBlockType)arg1;
- (void)fetchBucketWithID:(id)arg1;
- (void)fetchCacheIfNeeded;
- (void)loadDataWithForceRefresh:(_Bool)arg1;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (id)initWithSession:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

