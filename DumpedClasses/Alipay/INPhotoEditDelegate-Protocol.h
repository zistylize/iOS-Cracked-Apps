//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, UIViewController;

@protocol INPhotoEditDelegate <NSObject>

@optional
- (void)photoEditControllerDidCancel:(UIViewController *)arg1;
- (void)photoEditController:(UIViewController *)arg1 didFinishWithUneditedImage:(id)arg2;
- (void)photoEditController:(UIViewController *)arg1 didFinishEditWithImageData:(NSData *)arg2;
@end
