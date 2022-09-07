//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, UIImage;

@protocol MWPhoto <NSObject>
@property(retain, nonatomic) UIImage *underlyingImage;
- (void)showThumbImage;
- (void)unloadUnderlyingImage;
- (void)performLoadUnderlyingImageAndNotify;
- (void)loadUnderlyingImageAndNotify;

@optional
@property(nonatomic) _Bool isVideo;
@property(nonatomic) _Bool emptyImage;
- (void)cancelAnyLoading;
- (NSString *)caption;
- (void)getVideoURL:(void (^)(NSURL *))arg1;
@end

