//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface DTWirelessInfo : NSObject
{
    NSString *_wirelessMac;
    NSString *_wifiNodeName;
    NSString *_lacId;
    NSString *_cellId;
}

@property(copy, nonatomic) NSString *cellId; // @synthesize cellId=_cellId;
@property(copy, nonatomic) NSString *lacId; // @synthesize lacId=_lacId;
@property(copy, nonatomic) NSString *wifiNodeName; // @synthesize wifiNodeName=_wifiNodeName;
@property(copy, nonatomic) NSString *wirelessMac; // @synthesize wirelessMac=_wirelessMac;
- (void).cxx_destruct;
- (id)init;

@end
