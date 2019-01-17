//
// Created by yanchao on 2019/1/10.
//

#ifndef MYSIMPLECOLLECTION_BTREE_H
#define MYSIMPLECOLLECTION_BTREE_H

#endif //MYSIMPLECOLLECTION_BTREE_H
template <typename T>
struct Trie
{
    // B-树的基本结构
    T key;

};
//一个m阶的B树具有如下几个特征：
// 1.根结点至少有两个子女。
// 2.每个中间节点都包含k-1个元素和k个孩子，其中 m/2 <= k <= m
// 3.每一个叶子节点都包含k-1个元素，其中 m/2 <= k <= m
// 4.所有的叶子结点都位于同一层。
// 5.每个节点中的元素从小到大排列，节点当中k-1个元素正好是k个孩子包含的元素的值域分划。
//
//作者：程序员小灰
//链接：https://juejin.im/post/5c31f64c6fb9a049ac794ffc
//来源：掘金
//著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。