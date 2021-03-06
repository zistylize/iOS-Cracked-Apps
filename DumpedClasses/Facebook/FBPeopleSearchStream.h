//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FBGraphQLDownloadRequest, FBPeopleSearchStreamAnnouncer, FBPeopleSearchStreamResponseHandler, FBUserSession, NSArray, NSString;

@interface FBPeopleSearchStream : NSObject
{
    FBUserSession *_session;
    FBPeopleSearchStreamAnnouncer *_announcer;
    NSString *_currentQuery;
    FBGraphQLDownloadRequest *_currentDownloadRequest;
    _Bool _hasMoreResults;
    _Bool _isLoading;
    NSArray *_results;
    long long _endCursor;
    FBPeopleSearchStreamResponseHandler *_responseHandler;
}

@property(retain, nonatomic) FBPeopleSearchStreamResponseHandler *responseHandler; // @synthesize responseHandler=_responseHandler;
@property(nonatomic) long long endCursor; // @synthesize endCursor=_endCursor;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(copy, nonatomic) NSArray *results; // @synthesize results=_results;
@property(nonatomic) _Bool hasMoreResults; // @synthesize hasMoreResults=_hasMoreResults;
- (void).cxx_destruct;
- (void)_processSearchFailure:(id)arg1;
- (void)_notifyListenerWithSearchResults:(id)arg1;
- (void)_processSearchResults:(id)arg1 fromStartPosition:(long long)arg2;
- (void)_personChanged:(id)arg1;
- (void)_addConsistencyObserverForNewPerson:(id)arg1;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (_Bool)_performSearch;
- (void)cancelCurrentSearch;
- (_Bool)continueCurrentSearch;
- (_Bool)performNewSearch:(id)arg1;
- (id)initWithSession:(id)arg1;

@end

