//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WXHCEmbed.h"

@class HUDActivityView;

@interface TBWVEmbed : WXHCEmbed
{
    HUDActivityView *_pageLoadingIndicator;
}

@property(retain, nonatomic) HUDActivityView *pageLoadingIndicator; // @synthesize pageLoadingIndicator=_pageLoadingIndicator;
- (void).cxx_destruct;
- (void)wxHidePageLoadingIndicator;
- (void)wxShowPageLoadingIndicator:(id)arg1;
- (void)wxShowWarningBar:(id)arg1;
- (_Bool)wxCheckIsSecurityDomain:(id)arg1;
- (id)webViewController;
- (id)webView;

@end
