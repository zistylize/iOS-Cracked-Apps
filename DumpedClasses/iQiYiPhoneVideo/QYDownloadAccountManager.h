//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol QYDownloadAccountManagerDelegate;

@interface QYDownloadAccountManager : NSObject
{
    _Bool _isOpenDubi;
    id <QYDownloadAccountManagerDelegate> _deleagte;
    long long _state;
}

@property(nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic) _Bool isOpenDubi; // @synthesize isOpenDubi=_isOpenDubi;
@property(nonatomic) id <QYDownloadAccountManagerDelegate> deleagte; // @synthesize deleagte=_deleagte;
- (void)moduleDone:(id)arg1;
- (void)showAccountView;

@end

