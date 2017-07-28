//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ArticleInfoManager, NSArray, NSMutableDictionary, NSString, TTDetailNatantRelateArticleGroupView;

@interface TTDetailNatantRelateArticleGroupViewModel : NSObject
{
    NSArray *_relatedItems;
    NSString *_eventLabel;
    ArticleInfoManager *_articleInfoManager;
    TTDetailNatantRelateArticleGroupView *_groupView;
    NSMutableDictionary *_relatedImpressionDic;
}

+ (void)recordDetailForRelatedGroupModel:(id)arg1 groupModel:(id)arg2 listType:(unsigned long long)arg3 withStatus:(long long)arg4;
@property(retain, nonatomic) NSMutableDictionary *relatedImpressionDic; // @synthesize relatedImpressionDic=_relatedImpressionDic;
@property(nonatomic) __weak TTDetailNatantRelateArticleGroupView *groupView; // @synthesize groupView=_groupView;
@property(retain, nonatomic) ArticleInfoManager *articleInfoManager; // @synthesize articleInfoManager=_articleInfoManager;
@property(copy, nonatomic) NSString *eventLabel; // @synthesize eventLabel=_eventLabel;
@property(retain, nonatomic) NSArray *relatedItems; // @synthesize relatedItems=_relatedItems;
- (void).cxx_destruct;
- (id)mappingOriginToModel:(id)arg1;
- (unsigned long long)listTypeForRelatedItem;
- (_Bool)impressionStateForRelatedID:(id)arg1;
- (void)updateImpressionState:(_Bool)arg1 forRelatedID:(id)arg2;
- (id)relatedItemUrlWithDetailModelItem:(id)arg1;
- (id)relatedOpenPageUrlAtIndex:(long long)arg1;
- (id)relatedArticleAtIndex:(long long)arg1;
- (void)resetAllRelatedItemsWhenNatantDisappear;
- (void)checkVisableRelatedArticlesAtContentOffset:(double)arg1 referViewHeight:(double)arg2;
- (id)init;

@end
