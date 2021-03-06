//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class FBMemAdgroup, FBMemAlbum, FBMemBackdatedTime, FBMemBoostedComponent, FBMemCopyrightBlockInfo, FBMemEditHistoryConnection, FBMemExploreFeed, FBMemFeedBackendData, FBMemFeedStory, FBMemFeedTopicContent, FBMemFeedback, FBMemFeedbackContext, FBMemGoodwillAnniversaryCampaign, FBMemGoodwillThrowbackPromotedCampaignsConnection, FBMemGoodwillThrowbackPromotedStoriesConnection, FBMemGoodwillThrowbackPromotionColorPalette, FBMemGroup, FBMemGroupTopStoriesFeedUnitStoriesConnection, FBMemGroupsFeedUnitCoverItem, FBMemImage, FBMemInlineActivitiesConnection, FBMemModelObject, FBMemNativeTemplateView, FBMemNegativeFeedbackActionsConnection, FBMemPYMLWithLargeImageFeedUnitsConnection, FBMemPage, FBMemPageStoriesYouMissedFeedUnitStoriesConnection, FBMemPaginatedGroupsYouShouldJoinFeedUnitGroupsConnection, FBMemPaginatedPagesYouMayLikeConnection, FBMemPaginatedPeopleYouMayKnowFeedUnitUsersConnection, FBMemPeopleToFollowConnection, FBMemPeopleYouShouldFollowAtWorkConnection, FBMemPlatformApplication, FBMemPoliticalIssue, FBMemPoliticalIssuePivotItemsConnection, FBMemPostTranslatability, FBMemPrivacyScope, FBMemProfileDiscoveryFeedUnitConnection, FBMemRapidReportingPrompt, FBMemResearchPollSurvey, FBMemSponsoredData, FBMemSticker, FBMemStoryCompressionInfo, FBMemStoryHeader, FBMemStoryInsights, FBMemStoryPromptCompositionsConnection, FBMemStorySaveInfo, FBMemStorySetStoriesConnection, FBMemStoryTopicsContext, FBMemStructuredSurvey, FBMemSubstoriesConnection, FBMemSuggestedContentConnection, FBMemSuggestedVideoConnection, FBMemTextFormatMetadata, FBMemTextWithEntities, FBMemTimelineAppCollection, FBMemTopicFeedPivotItemsConnection, FBMemTopicsToFollowNuxTooltip, FBMemTranslation, FBMemTrueTopicFeedOptionsConnection, FBMemWithTagsConnection, NSArray, NSDate, NSNumber, NSString;
@protocol FBQueriedActorFieldsProtocol, FBQueriedEntityFieldsProtocol, FBQueriedFeedUnitFieldsProtocol, FBQueriedPlaceFieldsProtocol, FBQueriedProfileFieldsProtocol;

@protocol FBQueriedFeedUnitFieldsProtocol
- (long long)yearsAgoValue;
- (NSNumber *)yearsAgo;
- (NSString *)wwwURL;
- (FBMemWithTagsConnection *)withTags;
- (_Bool)visibleValue;
- (NSNumber *)visible;
- (NSArray *)viewerEditPostFeatureCapabilities;
- (FBMemModelObject<FBQueriedActorFieldsProtocol> *)via;
- (NSString *)urlString;
- (FBMemTextFormatMetadata *)upsellTextFormatMetadata;
- (FBMemModelObject<FBQueriedProfileFieldsProtocol> *)underlyingAdminCreator;
- (NSArray *)trendingStories;
- (FBMemTranslation *)translation;
- (FBMemPostTranslatability *)translatabilityForViewer;
- (NSString *)tracking;
- (long long)totalActiveUsersCountValue;
- (NSNumber *)totalActiveUsersCount;
- (NSArray *)topicsToFollowItems;
- (FBMemStoryTopicsContext *)topicsContext;
- (FBMemExploreFeed *)topic;
- (NSArray *)topActiveUsers;
- (FBMemModelObject<FBQueriedProfileFieldsProtocol> *)to;
- (NSString *)titleOverride;
- (FBMemTextWithEntities *)title;
- (NSArray *)tips;
- (FBMemTextWithEntities *)throwbackPromoTitle;
- (FBMemTextWithEntities *)throwbackDate;
- (FBMemTextFormatMetadata *)textFormatMetadata;
- (_Bool)surveyFinishedValue;
- (NSNumber *)surveyFinished;
- (FBMemStructuredSurvey *)survey;
- (FBMemFeedStory *)supplementalSocialStory;
- (NSString *)suggestionContext;
- (FBMemSuggestedVideoConnection *)suggestedVideos;
- (FBMemSuggestedContentConnection *)suggestedContent;
- (FBMemTextWithEntities *)suffix;
- (FBMemTrueTopicFeedOptionsConnection *)subtopicOptions;
- (FBMemTextWithEntities *)subtitle;
- (long long)substoryCountValue;
- (NSNumber *)substoryCount;
- (NSArray *)substoriesGroupingReasons;
- (NSArray *)substories;
- (NSString *)submitAnswerPrompt;
- (FBMemTextWithEntities *)storyTitle;
- (NSDate *)storyRankingTime;
- (FBMemStoryHeader *)storyHeader;
- (FBMemStoryCompressionInfo *)storyCompressionInfo;
- (NSArray *)stories;
- (NSString *)sponsoredLabel;
- (FBMemSponsoredData *)sponsoredData;
- (NSArray *)sponsorTags;
- (long long)sponsorRelationshipValue;
- (NSNumber *)sponsorRelationship;
- (NSString *)sourceId;
- (NSArray *)socialContextUsers;
- (FBMemTextWithEntities *)socialContextText;
- (_Bool)shouldShowItemsValue;
- (NSNumber *)shouldShowItems;
- (_Bool)shouldAutoSubmitValue;
- (NSNumber *)shouldAutoSubmit;
- (_Bool)shouldAutoOpenValue;
- (NSNumber *)shouldAutoOpen;
- (_Bool)sharedValue;
- (NSNumber *)shared;
- (FBMemModelObject<FBQueriedEntityFieldsProtocol> *)shareable;
- (NSString *)selectedNegativeFeedbackActionTrackingCodes;
- (NSString *)selectedNegativeFeedbackActionHideableToken;
- (NSString *)selectedNegativeFeedbackAction;
- (NSString *)seenState;
- (NSArray *)seeFirstActors;
- (NSDate *)scheduledPublishTime;
- (FBMemStorySaveInfo *)saveInfo;
- (_Bool)satpAnimationPlayedValue;
- (NSNumber *)satpAnimationPlayed;
- (NSString *)response;
- (FBMemTextWithEntities *)researchPollTitle;
- (FBMemResearchPollSurvey *)researchPoll;
- (NSString *)renderStyle;
- (NSArray *)relatedTarotDigests;
- (FBMemSticker *)referencedSticker;
- (FBMemRapidReportingPrompt *)rapidReportingPrompt;
- (NSString *)radioQuestionPrompt;
- (NSArray *)quickPromotionItems;
- (NSString *)qpSessionId;
- (FBMemTextWithEntities *)pymlTitle;
- (FBMemStoryPromptCompositionsConnection *)promptComposition;
- (FBMemGoodwillThrowbackPromotedStoriesConnection *)promotedStories;
- (FBMemPrivacyScope *)privacyScope;
- (FBMemTextWithEntities *)privacyDisclaimerTextWithEntities;
- (NSString *)privacyDisclaimer;
- (FBMemBoostedComponent *)postPromotionInfo;
- (NSString *)postAddedToAlbumId;
- (FBMemPoliticalIssuePivotItemsConnection *)politicalIssuePivotItems;
- (FBMemPoliticalIssue *)politicalIssue;
- (FBMemTopicFeedPivotItemsConnection *)pivotItems;
- (FBMemPeopleToFollowConnection *)peopleToFollowItems;
- (FBMemPeopleYouShouldFollowAtWorkConnection *)peopleToFollowAtWorkItems;
- (FBMemGroup *)parentObject;
- (FBMemPaginatedPagesYouMayLikeConnection *)pagesYouMayLike;
- (FBMemPageStoriesYouMissedFeedUnitStoriesConnection *)pageStories;
- (FBMemPage *)pageEnt;
- (FBMemTextWithEntities *)openActionButtonTitle;
- (FBMemTopicsToFollowNuxTooltip *)nuxTooltip;
- (NSArray *)nuxActionCardItems;
- (FBMemNativeTemplateView *)ntPymaHeader;
- (FBMemNativeTemplateView *)ntPymaFooter;
- (FBMemNegativeFeedbackActionsConnection *)negativeFeedbackActions;
- (FBMemNativeTemplateView *)nativeTemplateView;
- (FBMemTextWithEntities *)mobileTitle;
- (FBMemTextWithEntities *)messageSummary;
- (NSArray *)messageRichtext;
- (FBMemTextWithEntities *)message;
- (NSString *)legacyApiStoryId;
- (NSArray *)items;
- (FBMemTextWithEntities *)issueLinkText;
- (_Bool)isSeeFirstBumpedValue;
- (NSNumber *)isSeeFirstBumped;
- (_Bool)isMemorialPinnedPostValue;
- (NSNumber *)isMemorialPinnedPost;
- (FBMemTextWithEntities *)installActionButtonTitle;
- (FBMemStoryInsights *)insights;
- (FBMemInlineActivitiesConnection *)inlineActivities;
- (NSString *)initialCardPrompt;
- (FBMemModelObject<FBQueriedPlaceFieldsProtocol> *)implicitPlace;
- (NSString *)hideableToken;
- (NSString *)header;
- (_Bool)hasPostedFriendBirthdayCardValue;
- (NSNumber *)hasPostedFriendBirthdayCard;
- (_Bool)hasCompletedNegativeFeedbackGuidedActionsValue;
- (NSNumber *)hasCompletedNegativeFeedbackGuidedActions;
- (NSString *)graphQLID;
- (long long)gapRuleValue;
- (NSNumber *)gapRule;
- (FBMemImage *)fullWidthAccentImage;
- (FBMemTextWithEntities *)footerText;
- (FBMemTextWithEntities *)footer;
- (FBMemFeedbackContext *)feedbackContext;
- (FBMemFeedback *)feedback;
- (NSString *)feedUnitPaginationIdentifier;
- (NSString *)feedType;
- (FBMemFeedTopicContent *)feedTopicContent;
- (FBMemTextWithEntities *)feedMobileTitle;
- (FBMemFeedBackendData *)feedBackendData;
- (FBMemImage *)favicon;
- (FBMemModelObject<FBQueriedPlaceFieldsProtocol> *)explicitPlace;
- (NSString *)eventsSuggestionType;
- (FBMemEditHistoryConnection *)editHistory;
- (NSString *)displayTimeBlockState;
- (FBMemTextWithEntities *)displayExplanation;
- (FBMemProfileDiscoveryFeedUnitConnection *)discoveryCandidates;
- (_Bool)didSaveAwesomeTextFormattingValue;
- (NSNumber *)didSaveAwesomeTextFormatting;
- (FBMemTextWithEntities *)descriptionText;
- (FBMemTextWithEntities *)defaultTitle;
- (NSString *)debugInfo;
- (long long)currentQuestionNumberValue;
- (NSNumber *)currentQuestionNumber;
- (NSString *)currentQuestionID;
- (NSDate *)creationTime;
- (FBMemGroupsFeedUnitCoverItem *)coverItem;
- (FBMemCopyrightBlockInfo *)copyrightBlockInfo;
- (FBMemTextWithEntities *)contentSummary;
- (NSString *)confirmationText;
- (FBMemTextWithEntities *)confirmation;
- (FBMemGoodwillThrowbackPromotionColorPalette *)colorPalette;
- (NSArray *)collectionTypeList;
- (FBMemTimelineAppCollection *)collection;
- (NSString *)clientMutationId;
- (_Bool)clientHideTopicByUserValue;
- (NSNumber *)clientHideTopicByUser;
- (NSDate *)clickTime;
- (NSString *)checkboxQuestionPrompt;
- (NSString *)channelName;
- (NSString *)category;
- (FBMemTextWithEntities *)cancellation;
- (_Bool)canViewerEditValue;
- (NSNumber *)canViewerEdit;
- (_Bool)canViewerDeleteValue;
- (NSNumber *)canViewerDelete;
- (FBMemGoodwillThrowbackPromotedCampaignsConnection *)campaigns;
- (NSString *)cacheId;
- (NSString *)bucketId;
- (NSArray *)blacklistedItemIds;
- (NSArray *)blacklistedEventIds;
- (NSArray *)blacklistedAttachmentIdentifiers;
- (FBMemBackdatedTime *)backdatedTime;
- (FBMemModelObject<FBQueriedFeedUnitFieldsProtocol> *)autoPivotUnit;
- (NSArray *)attachments;
- (FBMemFeedStory *)attachedStory;
- (NSArray *)attachedActionLinks;
- (FBMemPlatformApplication *)application;
- (FBMemGoodwillAnniversaryCampaign *)anniversaryCampaign;
- (FBMemPaginatedPeopleYouMayKnowFeedUnitUsersConnection *)allUsers;
- (FBMemGroupTopStoriesFeedUnitStoriesConnection *)allTopStories;
- (FBMemSubstoriesConnection *)allSubstories;
- (FBMemStorySetStoriesConnection *)allStories;
- (FBMemPYMLWithLargeImageFeedUnitsConnection *)allItems;
- (FBMemPaginatedGroupsYouShouldJoinFeedUnitGroupsConnection *)allGroups;
- (FBMemAlbum *)album;
- (NSArray *)adminPanelItems;
- (FBMemAdgroup *)adgroup;
- (FBMemSponsoredData *)adImpression;
- (NSArray *)actors;
- (FBMemModelObject<FBQueriedActorFieldsProtocol> *)actor;
- (NSArray *)actions;
- (NSArray *)actionLinks;
- (FBMemImage *)accentImage;
- (NSString *)_Typename;
@end

