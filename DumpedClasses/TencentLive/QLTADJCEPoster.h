//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLJCEPoster.h"

#import "NSCopying.h"

@class JceObject, QLChannelAdManager, TADItemInfo;

@interface QLTADJCEPoster : QLJCEPoster <NSCopying>
{
    QLChannelAdManager *_adDelegate;
    TADItemInfo *_adItem;
    JceObject *_realObject;
}

@property(retain, nonatomic) JceObject *realObject; // @synthesize realObject=_realObject;
@property(retain, nonatomic) TADItemInfo *adItem; // @synthesize adItem=_adItem;
@property(nonatomic) __weak QLChannelAdManager *adDelegate; // @synthesize adDelegate=_adDelegate;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

