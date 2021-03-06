//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MQQSCBGuideView.h"

@class NSArray, NSMutableArray, UIImageView;

@interface MQQWiFiSettingGuideView : MQQSCBGuideView
{
    _Bool _isConnected;
    NSArray *_wifiList;
    NSMutableArray *_wifiCellsList;
    UIImageView *_networkSelectingView;
}

- (struct CGRect)wifiCellFrameWithIndex:(long long)arg1;
- (id)wifiListCellWithWiFi:(id)arg1 connected:(_Bool)arg2;
- (void)setConnected:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)resetAnimation;
- (id)initWithTouchRect:(id)arg1 wifiList:(id)arg2 connected:(_Bool)arg3;
- (void)dealloc;

@end

