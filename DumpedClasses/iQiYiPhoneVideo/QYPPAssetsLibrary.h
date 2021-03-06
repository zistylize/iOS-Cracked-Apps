//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class ALAssetsLibrary;

@interface QYPPAssetsLibrary : NSObject
{
    _Bool _usePhotoKit;
    ALAssetsLibrary *_alLib;
    CDUnknownBlockType _checkStatusFinish;
}

+ (id)sharedLibrary;
@property(copy, nonatomic) CDUnknownBlockType checkStatusFinish; // @synthesize checkStatusFinish=_checkStatusFinish;
@property(retain, nonatomic) ALAssetsLibrary *alLib; // @synthesize alLib=_alLib;
- (void).cxx_destruct;
- (void)writeImageToSavedPhotosAlbum:(struct CGImage *)arg1 orientation:(long long)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)assetForURL:(id)arg1 resultBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)phGroupForResult:(id)arg1 usingBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)enumerateGroupsWithTypes:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)requestAuthorization;
- (void)checkAuthorizationStatus:(CDUnknownBlockType)arg1 isRequestAuthorization:(_Bool)arg2;
- (void)checkAuthorizationStatus:(CDUnknownBlockType)arg1;
- (id)init;

@end

