//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SubscriptionDeduplicator : NSObject
{
    id _savedState;
}

@property(readonly, nonatomic) id savedState; // @synthesize savedState=_savedState;
- (void).cxx_destruct;
- (id)initWithState:(id)arg1;
- (id)runBlock:(CDUnknownBlockType)arg1 ifStateDidChangeTo:(id)arg2;

@end

