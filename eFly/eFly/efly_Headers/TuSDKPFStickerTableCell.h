//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TuSDKICTableViewCell.h"

@class TuSDKPFSticker, TuSDKPFStickerLocalGridView;

@interface TuSDKPFStickerTableCell : TuSDKICTableViewCell
{
    TuSDKPFStickerLocalGridView *_gridView;
    long long _innerWarpSpace;
    TuSDKPFSticker *_mode;
}

@property(retain, nonatomic) TuSDKPFSticker *mode; // @synthesize mode=_mode;
@property(nonatomic) long long innerWarpSpace; // @synthesize innerWarpSpace=_innerWarpSpace;
@property(readonly, nonatomic) TuSDKPFStickerLocalGridView *gridView; // @synthesize gridView=_gridView;
- (void).cxx_destruct;
- (void)viewNeedRest;
- (id)lsqSetSize:(struct CGSize)arg1;
- (void)lsqInitView;

@end

