//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DCShareManager, NSString;

@protocol DCShareManagerDelegate <NSObject>

@optional
- (void)shareManager:(DCShareManager *)arg1 shareSuccessed:(long long)arg2 shareChannelName:(NSString *)arg3;
- (void)shareManager:(DCShareManager *)arg1 clickShareButton:(long long)arg2 shareChannelName:(NSString *)arg3;
@end

