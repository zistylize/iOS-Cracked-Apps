//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface ImageInfo : NSObject
{
    NSString *_md5;
    NSString *_path;
    unsigned long long _fileSize;
}

@property(nonatomic) unsigned long long fileSize; // @synthesize fileSize=_fileSize;
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
@property(retain, nonatomic) NSString *md5; // @synthesize md5=_md5;
- (void).cxx_destruct;
- (id)initWithPath:(id)arg1 md5:(id)arg2 size:(unsigned long long)arg3;

@end

