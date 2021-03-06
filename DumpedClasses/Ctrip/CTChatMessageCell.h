//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "CTReSendMessageViewDelegate.h"

@class CTChatContentView, CTChatMessage, CTChatMessageSendStateView, CTImageView, NSIndexPath, NSString, UIColor, UIImageView, UILabel, UITableView;

@interface CTChatMessageCell : UITableViewCell <CTReSendMessageViewDelegate>
{
    CTChatMessage *_message;
    UITableView *_tableView;
    NSIndexPath *_indexPath;
    CTImageView *_avatarImageView;
    UILabel *_timeLabel;
    UILabel *_nickNameLabel;
    CTChatContentView *_messageContentView;
    UIImageView *_messageReadStateImageView;
    UIImageView *_messageDirectorImageView;
    CTChatMessageSendStateView *_messageSendStateView;
    UIImageView *_messageContentBackgroundImageView;
    id <CTChatMessageCellDelegate> _delegate;
    long long _messageType;
    long long _conversationType;
    long long _messageSendState;
    long long _messageReadState;
    unsigned long long _userStatus;
    UIColor *_conversationViewSenderNameTextColor;
}

+ (void)registerClass:(Class)arg1 forMediaType:(long long)arg2;
+ (void)registerSubclass;
+ (void)registerCustomMessageCell;
@property(retain, nonatomic) UIColor *conversationViewSenderNameTextColor; // @synthesize conversationViewSenderNameTextColor=_conversationViewSenderNameTextColor;
@property(nonatomic) unsigned long long userStatus; // @synthesize userStatus=_userStatus;
@property(nonatomic) long long messageReadState; // @synthesize messageReadState=_messageReadState;
@property(nonatomic) long long messageSendState; // @synthesize messageSendState=_messageSendState;
@property(nonatomic) long long conversationType; // @synthesize conversationType=_conversationType;
@property(nonatomic) long long messageType; // @synthesize messageType=_messageType;
@property(nonatomic) __weak id <CTChatMessageCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIImageView *messageContentBackgroundImageView; // @synthesize messageContentBackgroundImageView=_messageContentBackgroundImageView;
@property(retain, nonatomic) CTChatMessageSendStateView *messageSendStateView; // @synthesize messageSendStateView=_messageSendStateView;
@property(retain, nonatomic) UIImageView *messageDirectorImageView; // @synthesize messageDirectorImageView=_messageDirectorImageView;
@property(retain, nonatomic) UIImageView *messageReadStateImageView; // @synthesize messageReadStateImageView=_messageReadStateImageView;
@property(retain, nonatomic) CTChatContentView *messageContentView; // @synthesize messageContentView=_messageContentView;
@property(retain, nonatomic) UILabel *nickNameLabel; // @synthesize nickNameLabel=_nickNameLabel;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) CTImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(nonatomic) __weak NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) CTChatMessage *message; // @synthesize message=_message;
- (void).cxx_destruct;
- (void)resendMessage:(id)arg1;
- (void)handleMenuWillShowNotification:(id)arg1;
- (void)handleMenuWillHideNotification:(id)arg1;
- (void)copyItemClicked:(id)arg1;
- (void)resendItemClicked:(id)arg1;
- (void)deleteItemClicked:(id)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (id)menuItems;
- (void)handleLongPress:(id)arg1;
@property(readonly, nonatomic) unsigned long long messageOwner;
- (void)avatarImageViewHandleTap:(id)arg1;
- (void)handleTap:(id)arg1;
- (id)setTimeLabelFormatter:(id)arg1;
- (void)configureCellWithData:(id)arg1;
- (void)addGeneralView;
- (_Bool)isAbleToTap;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)updateConstraints;
- (_Bool)showTime;
- (_Bool)showName;
- (void)setup;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

