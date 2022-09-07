//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class ASIHTTPRequest, NSData, NSDate, NSDictionary, NSString, NSURL;

@protocol ASICacheDelegate <NSObject>
- (void)clearCachedResponsesForStoragePolicy:(int)arg1;
- (NSString *)pathToStoreCachedResponseDataForRequest:(ASIHTTPRequest *)arg1;
- (NSString *)pathToStoreCachedResponseHeadersForRequest:(ASIHTTPRequest *)arg1;
- (NSString *)pathToCachedResponseHeadersForURL:(NSURL *)arg1;
- (NSString *)pathToCachedResponseDataForURL:(NSURL *)arg1;
- (NSData *)cachedResponseDataForURL:(NSURL *)arg1;
- (NSDictionary *)cachedResponseHeadersForURL:(NSURL *)arg1;
- (void)removeCachedDataForURL:(NSURL *)arg1;
- (void)storeResponseForRequest:(ASIHTTPRequest *)arg1 maxAge:(double)arg2;
- (_Bool)isCachedDataCurrentForRequest:(ASIHTTPRequest *)arg1;
- (void)removeCachedDataForRequest:(ASIHTTPRequest *)arg1;
- (_Bool)canUseCachedDataForRequest:(ASIHTTPRequest *)arg1;
- (void)updateExpiryForRequest:(ASIHTTPRequest *)arg1 maxAge:(double)arg2;
- (NSDate *)expiryDateForRequest:(ASIHTTPRequest *)arg1 maxAge:(double)arg2;
- (int)defaultCachePolicy;
@end

