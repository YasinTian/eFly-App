//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TuSDKCPOptions.h"

@class NSString;

@interface TuSDKPFAlbumOptions : TuSDKCPOptions
{
    _Bool _disableAutoSkipToPhotoList;
    Class _viewClazz;
    Class _cellViewClazz;
    Class _emptyViewClazz;
    NSString *_skipAlbumName;
}

@property(copy, nonatomic) NSString *skipAlbumName; // @synthesize skipAlbumName=_skipAlbumName;
@property(nonatomic) _Bool disableAutoSkipToPhotoList; // @synthesize disableAutoSkipToPhotoList=_disableAutoSkipToPhotoList;
@property(retain, nonatomic) Class emptyViewClazz; // @synthesize emptyViewClazz=_emptyViewClazz;
@property(retain, nonatomic) Class cellViewClazz; // @synthesize cellViewClazz=_cellViewClazz;
@property(retain, nonatomic) Class viewClazz; // @synthesize viewClazz=_viewClazz;
- (void).cxx_destruct;
- (id)viewController;
- (Class)defaultViewClazz;
- (Class)defaultComponentClazz;
- (void)initOptions;

@end

