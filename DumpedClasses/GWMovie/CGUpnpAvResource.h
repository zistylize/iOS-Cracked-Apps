//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CGXmlNode.h"

@interface CGUpnpAvResource : CGXmlNode
{
}

- (long long)imageSizeCompare:(id)arg1;
- (id)extention;
- (id)mimeType;
- (_Bool)isAudio;
- (_Bool)isVideo;
- (_Bool)isMovie;
- (_Bool)isImage;
- (_Bool)isLargeImage;
- (_Bool)isMediumImage;
- (_Bool)isSmallImage;
- (_Bool)isThumbnail;
- (struct CGSize)resolution;
- (id)dlnaOrgFlags;
- (id)dlnaOrgOp;
- (id)dlnaOrgPn;
- (id)additionalInfoForKey:(id)arg1;
- (id)additionalInfo;
- (id)contentFormat;
- (id)network;
- (id)protocol;
- (id)protocolInfoAtIndex:(unsigned long long)arg1;
- (id)protocolInfo;
- (long long)size;
- (id)url;
- (void)dealloc;
- (id)initWithXMLNode:(void *)arg1;
- (id)init;

@end

