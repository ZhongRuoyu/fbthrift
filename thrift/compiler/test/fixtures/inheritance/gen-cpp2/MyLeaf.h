/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include <thrift/lib/cpp2/gen/service_h.h>

#include "thrift/compiler/test/fixtures/inheritance/gen-cpp2/MyLeafAsyncClient.h"
#include "thrift/compiler/test/fixtures/inheritance/gen-cpp2/module_types.h"
#include "thrift/compiler/test/fixtures/inheritance/gen-cpp2/MyNode.h"

namespace folly {
  class IOBuf;
  class IOBufQueue;
}
namespace apache { namespace thrift {
  class Cpp2RequestContext;
  class BinaryProtocolReader;
  class CompactProtocolReader;
  namespace transport { class THeader; }
}}

namespace cpp2 {

class MyLeafSvAsyncIf {
 public:
  virtual ~MyLeafSvAsyncIf() {}
  virtual void async_tm_do_leaf(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback) = 0;
  virtual folly::Future<folly::Unit> future_do_leaf() = 0;
  virtual folly::SemiFuture<folly::Unit> semifuture_do_leaf() = 0;
};

class MyLeafAsyncProcessor;

class MyLeafSvIf : public MyLeafSvAsyncIf, virtual public ::cpp2::MyNodeSvIf {
 public:
  typedef MyLeafAsyncProcessor ProcessorType;
  std::unique_ptr<apache::thrift::AsyncProcessor> getProcessor() override;
  CreateMethodMetadataResult createMethodMetadata() override;


  virtual void do_leaf();
  folly::Future<folly::Unit> future_do_leaf() override;
  folly::SemiFuture<folly::Unit> semifuture_do_leaf() override;
  void async_tm_do_leaf(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback) override;
 private:
  std::atomic<apache::thrift::detail::si::InvocationType> __fbthrift_invocation_do_leaf{apache::thrift::detail::si::InvocationType::AsyncTm};
};

class MyLeafSvNull : public MyLeafSvIf, virtual public ::cpp2::MyNodeSvIf {
 public:
  void do_leaf() override;
};

class MyLeafAsyncProcessor : public ::cpp2::MyNodeAsyncProcessor {
 public:
  const char* getServiceName() override;
  void getServiceMetadata(apache::thrift::metadata::ThriftServiceMetadataResponse& response) override;
  using BaseAsyncProcessor = ::cpp2::MyNodeAsyncProcessor;
 protected:
  MyLeafSvIf* iface_;
 public:
  void processSerializedCompressedRequest(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::protocol::PROTOCOL_TYPES protType, apache::thrift::Cpp2RequestContext* context, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) override;
 public:
  using ProcessFuncs = GeneratedAsyncProcessor::ProcessFuncs<MyLeafAsyncProcessor>;
  using ProcessMap = GeneratedAsyncProcessor::ProcessMap<ProcessFuncs>;
  static const MyLeafAsyncProcessor::ProcessMap& getOwnProcessMap();
 private:
  static const MyLeafAsyncProcessor::ProcessMap kOwnProcessMap_;
 private:
  template <typename ProtocolIn_, typename ProtocolOut_>
  void setUpAndProcess_do_leaf(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_do_leaf(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <class ProtocolIn_, class ProtocolOut_>
  static apache::thrift::LegacySerializedResponse return_do_leaf(int32_t protoSeqId, apache::thrift::ContextStack* ctx);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_do_leaf(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
 public:
  MyLeafAsyncProcessor(MyLeafSvIf* iface) :
      ::cpp2::MyNodeAsyncProcessor(iface),
      iface_(iface) {}

  virtual ~MyLeafAsyncProcessor() {}
};

} // cpp2
