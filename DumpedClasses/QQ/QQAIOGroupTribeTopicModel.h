//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQAIOSMMessageModel.h"

@class NSString;

@interface QQAIOGroupTribeTopicModel : QQAIOSMMessageModel
{
    _Bool _needShowExpandLoadingView;
    _Bool _groupTribeTopicMsgExpand;
    NSString *_groupTribeTopicMsgFullContent;
}

+ (id)modelWithMessageModel:(id)arg1;
@property(retain, nonatomic) NSString *groupTribeTopicMsgFullContent; // @synthesize groupTribeTopicMsgFullContent=_groupTribeTopicMsgFullContent;
@property(nonatomic, getter=isGroupTribeTopicMsgExpand) _Bool groupTribeTopicMsgExpand; // @synthesize groupTribeTopicMsgExpand=_groupTribeTopicMsgExpand;
@property(nonatomic, getter=isNeedShowExpandLoadingView) _Bool needShowExpandLoadingView; // @synthesize needShowExpandLoadingView=_needShowExpandLoadingView;
- (double)cellHeight;
- (id)cellIdentifier;
- (id)cellClassName;
- (void)dealloc;
- (id)initWithMessageModel:(id)arg1;

@end
