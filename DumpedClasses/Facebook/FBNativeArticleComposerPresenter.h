//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBComposerFlowDelegate-Protocol.h"

@class FBAnalyticsInfo, FBComposerAuthor, FBComposerPrivacySetting, FBComposerPublishTarget, FBComposerTraits, FBUserSession, NSString;
@protocol FBNavigationCoordinator;

@interface FBNativeArticleComposerPresenter : NSObject <FBComposerFlowDelegate>
{
    FBAnalyticsInfo *_analyticsInfo;
    FBComposerAuthor *_author;
    FBComposerTraits *_composerTraits;
    id <FBNavigationCoordinator> _navigationCoordinator;
    FBComposerPublishTarget *_publishTarget;
    FBUserSession *_session;
    FBComposerPrivacySetting *_shareNowPrivacySetting;
}

@property(retain, nonatomic) FBComposerPrivacySetting *shareNowPrivacySetting; // @synthesize shareNowPrivacySetting=_shareNowPrivacySetting;
- (void).cxx_destruct;
- (void)_logConclusionAnalyticsWithCompositionId:(id)arg1 shareableID:(id)arg2 shareType:(id)arg3 source:(id)arg4;
- (void)_displayConfirmationDialogWithLocalizedTitle:(id)arg1;
- (void)composerCompletedWithResult:(id)arg1;
- (void)performShareNowWithShareable:(id)arg1 source:(id)arg2 contentOrigin:(id)arg3;
- (void)openComposerWithShareable:(id)arg1 source:(id)arg2 contentOrigin:(id)arg3;
- (id)initWithUserSession:(id)arg1 navigationCoordinator:(id)arg2 analyticsInfo:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

